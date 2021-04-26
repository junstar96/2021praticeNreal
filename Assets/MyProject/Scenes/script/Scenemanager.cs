//내가 사용하는 scenemanager
//여기서 오브젝트들을 받고 


namespace NRKernal.NRExamples.MyArrowProject
{
    using UnityEngine;
    using System.Collections;
    using System;
    using UnityEngine.SceneManagement;
    using UnityEngine.UI;
    public class Scenemanager : MonoBehaviour
    {
        
        public GameObject loadingScene;

        public Slider slider;

        //public Slider oneSecondbar;

        //private CameraSmoothFollow camerafollower;

        //씬의 이름을 받아오도록 하자.
        [HideInInspector]
        public string scenename;

        [HideInInspector]
        public string scenemode;

   

        private DateTime datetime;
        /// <summary>배치 후 오브젝트가 제대로 된 위치에 보정이 되는가를 확인하기 위한 bool값</summary>


        private static Scenemanager m_instance;

        public static Scenemanager Instance
        {
            get
            {
                return m_instance;
            }
        }



        /// <summary>
        /// NRglass가 지원하는 것들을 이용하기 위한 핸들
        /// </summary>
        private ControllerHandEnum m_CurrentDebugHand = ControllerHandEnum.Right;
        public Quaternion smartphonerotation;


        public void ChangeScene(string name)
        {
            StartCoroutine(AsyncLoadScene(name));
        }

        public void Awake()
        {
            //oneSecondbar.value = 0.0f;
            var check = FindObjectsOfType<Scenemanager>();

            Debug.Log("check : " + check.Length);
            if(check.Length == 1)
            {
                m_instance = this;
                DontDestroyOnLoad(gameObject);
                datetime = DateTime.Now;
                Debug.Log("GPStour start : " + datetime);
            }
            else if(check.Length > 1)
            {
                Debug.Log("check");
                Destroy(gameObject);
            }

            //Input.gyro.enabled = true;
            //loadingScene.transform.Find("Panel").gameObject.SetActive(false);
            
        }

        private void Update()
        {
            if(loadingScene == null)
            {
                return;
            }
            scenename = SceneManager.GetActiveScene().name;
            if (NRInput.GetAvailableControllersCount() < 2)
            {
                m_CurrentDebugHand = NRInput.DomainHand;
            }
            else
            {
                if (NRInput.GetButtonDown(ControllerHandEnum.Right, ControllerButton.TRIGGER))
                {
                    m_CurrentDebugHand = ControllerHandEnum.Right;
                }
                else if (NRInput.GetButtonDown(ControllerHandEnum.Left, ControllerButton.TRIGGER))
                {
                    m_CurrentDebugHand = ControllerHandEnum.Left;
                }
            }

            smartphonerotation = NRInput.GetRotation(m_CurrentDebugHand);
            //OneSecondBarControll();



        }


        /// <summary>
        /// 회전변환을 일으키는 함수, 이 함수가 있어야지 제대로 배치가 되는 듯 하다.
        /// </summary>
        /// <param name="gameobject_base"></param>
        /// <param name="name"></param>
       


        IEnumerator AsyncLoadScene(string name)
        {
            slider.value = 0.0f;
            loadingScene.SetActive(true);


            AsyncOperation operation;
            if (string.Equals(SceneManager.GetActiveScene().name, "Logo scene"))
            {
                operation = SceneManager.LoadSceneAsync("Main Scene");
            }
            else
            {
                operation = SceneManager.LoadSceneAsync("Logo scene");

            }

            scenemode = name;
            Debug.Log("scenemode : " + scenemode);

            //loadingScene.SetActive(true);
            slider.gameObject.SetActive(true);

#if !UNITY_EDITOR
            yield return new WaitUntil(() => GPScontroller.Instance.isConnected);
            Debug.Log("HEEEEEEE");
#endif

            do
            {
                operation.allowSceneActivation = false;
                float progress = Mathf.Clamp(operation.progress, 0, 1);
                slider.value = progress;
                Debug.Log("slider value :" + slider.value);
                //Debug.Log(ARLocationProvider.Instance.HasStarted);


                yield return null;
            } while (slider.value < 0.9);
            

            

            slider.gameObject.SetActive(false);
            loadingScene.SetActive(false);

            Debug.Log("operation is done");
            //yield return new WaitUntil(() => Input.compass.enabled);


        }


       
    }

}


