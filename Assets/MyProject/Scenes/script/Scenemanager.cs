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
        [Tooltip("현재 사용 가능한 기능들")]
        public GameObject loadingScene;

        [Tooltip("관광 씬에서 사용하게 될 오브젝트 생성기")]
        public GameObject webmaploader;


        [Tooltip("버스정류장 씬에서 사용하게 될 오브젝트 생성기")]
        public GameObject busstationxml;

        [Tooltip("게임 씬으로 넘어가기 위한 물건")]
        public GameObject gamemaploader;

        [Tooltip("로딩 바")]
        public Slider slider;

        //public Slider oneSecondbar;

        [Tooltip("가까이 가면 소리가 나도록 해보자")]
        public AudioClip[] backgroundsounds;

        //private CameraSmoothFollow camerafollower;

        //씬의 이름을 받아오도록 하자.
        [HideInInspector]
        public string scenename;

        [HideInInspector]
        public string scenemode;

        //초반에 각도를 받아오는 값
        public bool isFixingCanvas;
        public float first_magnetic;

        private DateTime datetime;
        /// <summary>배치 후 오브젝트가 제대로 된 위치에 보정이 되는가를 확인하기 위한 bool값</summary>
        private bool isrotation = false;


        private static Scenemanager m_instance;

        public static Scenemanager instance
        {
            get
            {
                if (m_instance == null)
                {
                    m_instance = new Scenemanager();
                }
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

        public void Start()
        {
            //Input.gyro.enabled = true;
            isFixingCanvas = false;
            first_magnetic = 0.0f;
            //loadingScene.transform.Find("Panel").gameObject.SetActive(false);
            datetime = DateTime.Now;
            Debug.Log("GPStour start : " + datetime);
            m_instance = this;
            //oneSecondbar.value = 0.0f;
            DontDestroyOnLoad(this);
        }

        private void Update()
        {
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

        //private void OneSecondBarControll()
        //{
        //    if ((360 - Input.gyro.attitude.w * 360) < 0.8)
        //    {
        //        if (oneSecondbar.value <= 0.999f && !isFixingCanvas)
        //        {

        //            CameraSmoothFollow camerafollow = loadingScene.GetComponent<CameraSmoothFollow>();
        //            camerafollow.enabled = false;
        //            //oneSecondbar.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(150.0f, 150f, 3.0f));
        //            //oneSecondbar.transform.eulerAngles = Camera.main.transform.eulerAngles;
        //            oneSecondbar.gameObject.SetActive(true);
        //            oneSecondbar.value += Time.deltaTime;
        //            oneSecondbar.transform.localPosition = NRInput.CameraCenter.position;
        //            if (oneSecondbar.value >= 0.999f)
        //            {
        //                isFixingCanvas = true;

        //                oneSecondbar.gameObject.SetActive(false);

        //                first_magnetic = Input.compass.magneticHeading;
        //                loadingScene.transform.Find("Panel").gameObject.SetActive(true);
        //                loadingScene.transform.position = NRInput.CameraCenter.position + new Vector3(-4.0f * Mathf.Sin(NRInput.CameraCenter.eulerAngles.y * Mathf.PI / 180),
        //                    0, 4.0f * Mathf.Cos(NRInput.CameraCenter.eulerAngles.y * Mathf.PI / 180));
        //                loadingScene.transform.rotation = NRInput.CameraCenter.rotation;
        //            }
        //        }
        //    }


        //}


        /// <summary>
        /// 회전변환을 일으키는 함수, 이 함수가 있어야지 제대로 배치가 되는 듯 하다.
        /// </summary>
        /// <param name="gameobject_base"></param>
        /// <param name="name"></param>
        IEnumerator RotationObject(GameObject gameobject_base)
        {
            Debug.Log("gameobject_base name : " + gameobject_base.name);


            isFixingCanvas = true;
            smartphonerotation = NRInput.GetRotation(ControllerHandEnum.Right);

            float camera_accuracy = ObjectPositionSetting.CameraDegree();
            Debug.Log("camera_accuracy : " + camera_accuracy);
            float gyro_degree = ObjectPositionSetting.GyroDegree();
            float magnet_radian = (gyro_degree - camera_accuracy) * Mathf.PI / 180;
            //float magnet_radian = Input.location.isEnabledByUser ? ((float)ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading
            //           - Camera.main.transform.eulerAngles.y/* - (float)degree_correction*/) * Mathf.PI / 180 : Mathf.PI / 2.0f;

            Debug.Log("gameobject name : " + gameobject_base.gameObject.name);

            if (gameobject_base.GetComponent<WebMapLoader>() != null)
            {
                yield return new WaitUntil(() => gameobject_base.GetComponent<WebMapLoader>().MakeFinish);

                foreach (var follow_target in gameobject_base.GetComponent<WebMapLoader>().stagePoint)
                {
                    AudioSource check = follow_target.AddComponent<AudioSource>() as AudioSource;
                    check.maxDistance = 20;
                    check.minDistance = 1;
                    check.clip = backgroundsounds[UnityEngine.Random.Range(0, backgroundsounds.Length)];
                    check.Stop();

                    //if (!follow_target.activeSelf)
                    //{
                    //    follow_target.SetActive(true);
                    //}

                    Debug.Log("current degree : " + magnet_radian * 180 / Mathf.PI);
                    Debug.Log("current gps : " + Input.location.lastData.latitude + ", " + Input.location.lastData.longitude);
                    Debug.Log("current lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.y + "," + follow_target.transform.position.z);
                    follow_target.transform.position =
                                        new Vector3(follow_target.transform.position.x * Mathf.Cos(magnet_radian) - follow_target.transform.position.z * Mathf.Sin(magnet_radian),
                                        follow_target.transform.position.y,
                                        follow_target.transform.position.z * Mathf.Cos(magnet_radian) + follow_target.transform.position.x * Mathf.Sin(magnet_radian));
                    Debug.Log("after lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.y + "," + follow_target.transform.position.z);




                    follow_target.transform.localScale = new Vector3(Mathf.Sqrt(Mathf.Abs(follow_target.transform.position.y)) + 1.0f,
                        Mathf.Sqrt(Mathf.Abs(follow_target.transform.position.y)) + 1.0f,
                        Mathf.Sqrt(Mathf.Abs(follow_target.transform.position.y)) + 1.0f);
                    //follow_target.GetComponent<PlaceAtLocation>().Location.Altitude;
                }
            }
            else if (gameobject_base.GetComponent<BUSstationXML>() != null)
            {
                yield return new WaitUntil(() => gameobject_base.GetComponent<BUSstationXML>().makefinish);
                foreach (var follow_target in gameobject_base.GetComponent<BUSstationXML>().stagePoint)
                {
                    if (!follow_target.activeSelf)
                    {
                        follow_target.SetActive(true);
                    }
                    Debug.Log("current degree : " + magnet_radian);
                    Debug.Log("current lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.y + "," + follow_target.transform.position.z);
                    follow_target.transform.position =
                                        new Vector3(follow_target.transform.position.x * Mathf.Cos(magnet_radian) - follow_target.transform.position.z * Mathf.Sin(magnet_radian),
                                        0,
                                        follow_target.transform.position.z * Mathf.Cos(magnet_radian) + follow_target.transform.position.x * Mathf.Sin(magnet_radian));
                    Debug.Log("after lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.y + "," + follow_target.transform.position.z);
                }
            }



            isrotation = true;
        }


        IEnumerator AsyncLoadScene(string name)
        {
            AsyncOperation operation;
            if (string.Equals(name, "GameScene"))
            {
                operation = SceneManager.LoadSceneAsync(name);
            }
            else
            {
                operation = SceneManager.LoadSceneAsync("Main Scene");
            }

            scenemode = name;

            //loadingScene.SetActive(true);
            slider?.gameObject.SetActive(true);


            do
            {
                operation.allowSceneActivation = false;
                float progress = Mathf.Clamp01(operation.progress);
                slider.value = progress;

                //Debug.Log(ARLocationProvider.Instance.HasStarted);

            } while (operation.progress < 0.9f);

            Debug.Log("operation is done");
            //yield return new WaitUntil(() => Input.compass.enabled);
            Debug.Log("arlocation data lead");

            if (string.Equals(name, "Main Scene"))
            {
                if (!webmaploader.activeSelf)
                {
                    webmaploader.SetActive(true);
                    StartCoroutine(RotationObject(webmaploader));

                }
            }
            else if (string.Equals(name, "BusStationScene"))
            {
                if (!busstationxml.activeSelf)
                {
                    busstationxml.SetActive(true);
                    StartCoroutine(RotationObject(busstationxml));
                }
            }
            else if (string.Equals(name, "GameScene"))
            {
                if (!gamemaploader.activeSelf)
                {
                    gamemaploader.SetActive(true);
                    StartCoroutine(RotationObject(gamemaploader));
                }
            }


            yield return new WaitUntil(() => isrotation);
            slider.gameObject.SetActive(false);
            loadingScene.SetActive(false);
            operation.allowSceneActivation = true;


        }

    }
}


