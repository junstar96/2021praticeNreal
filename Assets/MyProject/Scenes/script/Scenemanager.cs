using UnityEngine;
using System.Collections;
using System;
using System.Globalization;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using NRKernal;
using NRKernal.NRExamples.MyArrowProject;

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

    public Slider oneSecondbar;

    [Tooltip("가까이 가면 소리가 나도록 해보자")]
    public AudioClip[] backgroundsounds;


    //씬의 이름을 받아오도록 하자.
    [HideInInspector]
    public string scenename;

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
            if(m_instance == null)
            {
                m_instance = new Scenemanager();
            }
            return m_instance;
        }
    }

    /// <summary>
    /// NRglass가 지원하는 것들을 이용하기 위한 핸들
    /// </summary>
    private NRKernal.ControllerHandEnum m_CurrentDebugHand = NRKernal.ControllerHandEnum.Right;
    public Quaternion smartphonerotation;

    
    //영상 저장 확인을 위한 bool 값, 참이면 영상 시작, 거짓이면 영상 끝
    //private bool isrecord = false;

    //public GameObject loadingScene;
    //public Slider slider;

    // Start is called before the first frame update

    //text를 조작하기 위해 받아오자.


    public void ChangeScene(string name)
    {
        StartCoroutine(AsyncLoadScene(name));
    }

    public void Start()
    {
        Input.gyro.enabled = true;
        isFixingCanvas = false;
        first_magnetic = 0.0f;
        loadingScene.SetActive(false);
        datetime = DateTime.Now;
        Debug.Log("GPStour start : " +  datetime);
        m_instance = this;
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


        OneSecondBarControll();

        

    }

    private void OneSecondBarControll()
    {
        if(Input.gyro.attitude.eulerAngles.x < 10 && Input.gyro.attitude.eulerAngles.x > - 10 && Input.gyro.attitude.w > 0.9 && Input.gyro.attitude.z < 0.1)
        {
            if(!isFixingCanvas)
            {
                //oneSecondbar.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(150.0f, 150f, 3.0f));
                //oneSecondbar.transform.eulerAngles = Camera.main.transform.eulerAngles;
                oneSecondbar.gameObject.SetActive(true);
                oneSecondbar.value += Time.deltaTime;
                oneSecondbar.transform.localPosition = NRInput.CameraCenter.position;
                if (oneSecondbar.value >= 0.999f)
                {
                    oneSecondbar.gameObject.SetActive(false);
                    isFixingCanvas = true;
                    first_magnetic = Input.compass.magneticHeading;
                    loadingScene.SetActive(true);
                    loadingScene.transform.localRotation = Camera.main.transform.rotation;
                }
            }
            else
            {
                oneSecondbar.value = 0.0f;
                oneSecondbar.gameObject.SetActive(false);
            }
        }

      
    }


    /// <summary>
    /// 회전변환을 일으키는 함수, 이 함수가 있어야지 제대로 배치가 되는 듯 하다.
    /// </summary>
    /// <param name="gameobject_base"></param>
    /// <param name="name"></param>
    IEnumerator RotationObject(GameObject gameobject_base)
    {
        smartphonerotation = NRInput.GetRotation(ControllerHandEnum.Right);

        float camera_accuracy = NRInput.CameraCenter.eulerAngles.y < 180 ?
            NRInput.CameraCenter.eulerAngles.y : -(360.0f - NRInput.CameraCenter.eulerAngles.y);


        float magnet_radian = (-camera_accuracy) * Mathf.PI / 180;
        //float magnet_radian = Input.location.isEnabledByUser ? ((float)ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading
        //           - Camera.main.transform.eulerAngles.y/* - (float)degree_correction*/) * Mathf.PI / 180 : Mathf.PI / 2.0f;





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

                Debug.Log("current degree : " + magnet_radian);
                Debug.Log("current gps : " + Input.location.lastData.latitude + ", " +Input.location.lastData.longitude);
                Debug.Log("current lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.y + "," + follow_target.transform.position.z);
                follow_target.transform.position =
                                    new Vector3(follow_target.transform.position.x * Mathf.Cos(magnet_radian) - follow_target.transform.position.z * Mathf.Sin(magnet_radian),
                                    follow_target.transform.position.y,
                                    follow_target.transform.position.z * Mathf.Cos(magnet_radian) + follow_target.transform.position.x * Mathf.Sin(magnet_radian));
                Debug.Log("after lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.y + "," + follow_target.transform.position.z);


                

                //follow_target.transform.localScale = new Vector3(Mathf.Sqrt(Mathf.Abs((float)follow_target_data.Location.Altitude)) + 1.0f,
                //    Mathf.Sqrt(Mathf.Abs((float)follow_target_data.Location.Altitude)) + 1.0f,
                //    Mathf.Sqrt(Mathf.Abs((float)follow_target_data.Location.Altitude)) + 1.0f);
                //follow_target.GetComponent<PlaceAtLocation>().Location.Altitude;
            }
        }
        else if(gameobject_base.GetComponent<BUSstationXML>() != null)
        {
            yield return new WaitUntil(() => gameobject_base.GetComponent<BUSstationXML>().makefinish);

            foreach (var follow_target in gameobject_base.GetComponent<BUSstationXML>().stagePoint)
            {
                if (!follow_target.activeSelf)
                {
                    follow_target.SetActive(true);
                }
                Debug.Log("current degree : " + magnet_radian);
                Debug.Log("current lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.y + ","  + follow_target.transform.position.z);
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
            Debug.Log("progress :" + progress);
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
        else if(string.Equals(name, "GameScene"))
        {
            if(!gamemaploader.activeSelf)
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


