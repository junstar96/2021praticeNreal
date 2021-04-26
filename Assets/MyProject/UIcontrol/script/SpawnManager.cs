
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

        // Update is called once per frame

        IEnumerator RotationObject(GameObject gameobject_base)
        {
            Debug.Log("gameobject_base name : " + gameobject_base.name);
            
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



       
        }
    }
}

