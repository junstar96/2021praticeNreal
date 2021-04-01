using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using ARLocation;
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

    [Tooltip("가까이 가면 소리가 나도록 해보자")]
    public AudioClip[] backgroundsounds;

    private bool isrotation = false;

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
        DontDestroyOnLoad(this);
    }

    /// <summary>
    /// 회전변환을 일으키는 함수, 이 함수가 있어야지 제대로 배치가 되는 듯 하다.
    /// </summary>
    /// <param name="gameobject_base"></param>
    /// <param name="name"></param>
    IEnumerator RotationObject(GameObject gameobject_base)
    {
        
        float magnet_radian = Input.location.isEnabledByUser ? ((float)ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading
                   - Camera.main.transform.eulerAngles.y/* - (float)degree_correction*/) * Mathf.PI / 180 : Mathf.PI / 2.0f;


        
        if (gameobject_base.GetComponent<WebMapLoader>() != null)
        {
            yield return new WaitUntil(() => gameobject_base.GetComponent<WebMapLoader>().MakeFinish);

            foreach (var follow_target in gameobject_base.GetComponent<WebMapLoader>().stagePoint)
            {
                AudioSource check = follow_target.AddComponent<AudioSource>() as AudioSource;
                check.maxDistance = 20;
                check.minDistance = 1;
                check.clip = backgroundsounds[Random.Range(0, backgroundsounds.Length)];
                check.Stop();

                PlaceAtLocation follow_target_data = follow_target.GetComponent<PlaceAtLocation>();
                
                //if (!follow_target.activeSelf)
                //{
                //    follow_target.SetActive(true);
                //}
                
                
                follow_target.transform.position =
                                    new Vector3(follow_target.transform.position.x * Mathf.Cos(magnet_radian) - follow_target.transform.position.z * Mathf.Sin(magnet_radian),
                                    (float)follow_target_data.Location.Altitude,
                                    follow_target.transform.position.z * Mathf.Cos(magnet_radian) + follow_target.transform.position.x * Mathf.Sin(magnet_radian));

                follow_target.name = follow_target_data.Location.Label;


                follow_target.transform.localScale = new Vector3(Mathf.Sqrt(Mathf.Abs((float)follow_target_data.Location.Altitude)) + 1.0f,
                    Mathf.Sqrt(Mathf.Abs((float)follow_target_data.Location.Altitude)) + 1.0f,
                    Mathf.Sqrt(Mathf.Abs((float)follow_target_data.Location.Altitude)) + 1.0f);
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
                Debug.Log("current lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.z);
                follow_target.transform.position =
                                    new Vector3(follow_target.transform.position.x * Mathf.Cos(magnet_radian) - follow_target.transform.position.z * Mathf.Sin(magnet_radian),
                                    0,
                                    follow_target.transform.position.z * Mathf.Cos(magnet_radian) + follow_target.transform.position.x * Mathf.Sin(magnet_radian));
                Debug.Log("after lotation : " + follow_target.transform.position.x + "," + follow_target.transform.position.z);
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
    

        //loadingScene.SetActive(true);
        slider?.gameObject.SetActive(true);


        do
        {
            operation.allowSceneActivation = false;
            float progress = operation.progress;
            float arlocationprogress = ARLocationProvider.Instance.HasStarted ? 0.1f : 0.0f;
            slider.value = progress + arlocationprogress;
            //Debug.Log(ARLocationProvider.Instance.HasStarted);
            
        } while (operation.progress < 0.9f);

        Debug.Log("operation is done");
        yield return new WaitUntil(() => ARLocationProvider.Instance.HasStarted);
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


