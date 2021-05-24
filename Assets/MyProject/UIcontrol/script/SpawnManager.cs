
namespace NRKernal.NRExamples.MyArrowProject
{
    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;
    public class SpawnManager : MonoBehaviour
    {
        [Tooltip("관광 씬에서 사용하게 될 오브젝트 생성기")]
        public WebMapLoader webmaploader;


        [Tooltip("버스정류장 씬에서 사용하게 될 오브젝트 생성기")]
        public BUSstationXML busstationxml;

        public Quaternion smartphonerotation;

        public bool Islotate;

       

        // Start is called before the first frame update

        private void OnEnable()
        {

            if (Scenemanager.Instance.scenemode == "Webmaploader")
            {
                if (!webmaploader.gameObject.activeSelf)
                {
                    webmaploader.gameObject.SetActive(true);
                    StartCoroutine(RotationObject(webmaploader.gameObject));
                }
            }
            else if (Scenemanager.Instance.scenemode == "BusStationScene")
            {
                if (!busstationxml.gameObject.activeSelf)
                {
                    busstationxml.gameObject.SetActive(true);
                    StartCoroutine(RotationObject(busstationxml.gameObject));
                }
            }
        }

        IEnumerator RotationObject(GameObject gameobject_base)
        {
            Debug.Log("gameobject_base name : " + gameobject_base.name);
            

            //여기서 오브젝트들이 전부 생성되기까지 기다린다.
            if(gameobject_base.GetComponent<WebMapLoader>() != null)
            {
                yield return new WaitUntil(() => gameobject_base.GetComponent<WebMapLoader>().MakeFinish);
            }
            else if(gameobject_base.GetComponent<BUSstationXML>() != null)
            {
                yield return new WaitUntil(() => gameobject_base.GetComponent<BUSstationXML>().makefinish);
            }

            smartphonerotation = NRInput.GetRotation(ControllerHandEnum.Right);

            float camera_accuracy = ObjectPositionSetting.CameraDegree();
            Debug.Log("camera_accuracy : " + camera_accuracy);
            float magnet_degree = ObjectPositionSetting.MagnetDegree() - camera_accuracy;

            gameobject_base.transform.eulerAngles = gameobject_base.transform.eulerAngles + new Vector3(0, -magnet_degree, 0);


            Debug.Log("gameobject name : " + gameobject_base.gameObject.name);

            if (gameobject_base.GetComponent<WebMapLoader>() != null)
            {

                foreach (var follow_target in gameobject_base.GetComponent<WebMapLoader>().stagePoint)
                {

                    follow_target.transform.localScale = new Vector3(Mathf.Sqrt(Mathf.Abs(follow_target.transform.position.y)) + 1.0f,
                        Mathf.Sqrt(Mathf.Abs(follow_target.transform.position.y)) + 1.0f,
                        Mathf.Sqrt(Mathf.Abs(follow_target.transform.position.y)) + 1.0f);
                    //follow_target.GetComponent<PlaceAtLocation>().Location.Altitude;
                }
            }
            
        }



    }
}

