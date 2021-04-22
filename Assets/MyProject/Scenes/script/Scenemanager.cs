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

        public static Scenemanager instance
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
            //Input.gyro.enabled = true;
            //loadingScene.transform.Find("Panel").gameObject.SetActive(false);
            datetime = DateTime.Now;
            Debug.Log("GPStour start : " + datetime);
            
            //oneSecondbar.value = 0.0f;
            var check = FindObjectsOfType<Scenemanager>();

            Debug.Log("check :" + check.Length);
            if(check.Length == 1)
            {
                m_instance = this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Destroy(gameObject);
            }
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


            do
            {
                operation.allowSceneActivation = false;
                float progress = Mathf.Clamp01(operation.progress);
                slider.value = progress;

                //Debug.Log(ARLocationProvider.Instance.HasStarted);

            } while (operation.progress < 0.9f);

            
            Debug.Log("operation is done");
            //yield return new WaitUntil(() => Input.compass.enabled);

           
            
            if (string.Equals(name, "Logo scene"))
            {
                //생겨났던 오브젝트들을 모두 제거하고 
                //그 다음 씬을 바꾸는 것이다. 

                slider.value = 0.0f;
                loadingScene.SetActive(true);
                slider.gameObject.SetActive(true);
                operation.allowSceneActivation = true;
                yield break;
            }

#if !UNITY_EDITOR
            yield return new WaitUntil(() => Input.location.isEnabledByUser);
#else
            yield return new WaitForSeconds(1);
#endif
            slider.gameObject.SetActive(false);
            loadingScene.SetActive(false);
            operation.allowSceneActivation = true;

        }

    }
}


