namespace NRKernal.NRExamples
{

    namespace MyArrowProject
    {
        using UnityEngine;
        using UnityEngine.Events;
        using System.Collections.Generic;

        /// <summary>
        /// 부모쪽에서 데이터를 보낼 때
        /// </summary>
        /// <param name="name"></param>
        /// <param name="lati"></param>
        /// <param name="longi"></param>
        public delegate void DataPushEventHandler(string name, double lati, double longi);

        /// <summary>
        /// 자식쪽에서 데이터를 보낼 때
        /// </summary>
        /// <param name="name"></param>
        /// <param name="lati"></param>
        /// <param name="longi"></param>
        public delegate void DataGetEventHandler(string name, double lati, double longi);

        public class ArrowController : MonoBehaviour, MygpsTrans
        {
            

            public GameObject arrow;

            public bool isArrowview = false;

            public UnityEvent arrowset;
            //private Transform player;

            public UnityEngine.UI.Text distance;

            //ARLocation 포함 함수들

            private Vector3 arrow_target = new Vector3(100,100,100);
            //public double first_magnetic_degree;

            public double target_lati;
            public double target_longi;
            private string target_name = string.Empty;

            //public static System.Action<string, double, double> statechanged;

            //public GameObject test_target;

            private void Awake()
            {
                //arrowset = new UnityEvent();
                //player = GameObject.FindWithTag("Player").GetComponent<Transform>();
                arrowset.AddListener(SetArrow);
            }


            public void SetArrow()
            {
                isArrowview = true;
            }

            //private void PositionInitialize()
            //{
            //    if(NRInput.GetButtonDown(ControllerButton.APP))
            //    {
            //        click_count++;

            //        if(!IsInvoking("DoubleClick"))
            //        {
            //            Invoke("DoubleClick", 1.0f);
            //        }

            //    }
            //    else if(click_count >= 2)
            //    {
            //        CancelInvoke("DoubleClick");
            //        transform.position = NRInput.CameraCenter.position;
            //        transform.rotation = NRInput.CameraCenter.rotation;
            //    }
            //    //float magnet_radian = Input.location.isEnabledByUser ? ((float)ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading
            //    //    - Camera.main.transform.eulerAngles.y/* - (float)degree_correction*/) * Mathf.PI / 180 : Mathf.PI / 2.0f;

                

            //}


            // Update is called once per frame
            void Update()
            {
                if(target_name == string.Empty)
                {
                    arrow.SetActive(false);
                    distance.gameObject.SetActive(false);
                    return;
                }

                if(!distance.gameObject.activeSelf)
                {
                    distance.gameObject.SetActive(true);
                }


                if (string.Equals(Scenemanager.Instance.scenemode, "BusStationScene"))
                {
                    var entity = GameObject.Find("TargetCreater").transform.Find("BusStationXML").transform.Find(target_name);
                    //Quaternion looktarget = Quaternion.LookRotation(entity.position, Vector3.up);
                    //looktarget = looktarget * Quaternion.Inverse(gameObject.transform.rotation);
                    //arrow.transform.localRotation = looktarget;
                    target_lati = entity.GetComponent<GPSChecker>().Latitude;
                    target_longi = entity.GetComponent<GPSChecker>().Longitude;

                    var degree = (float)(ObjectPositionSetting.BearingP1toP2(Input.location.lastData.latitude, Input.location.lastData.longitude, target_lati, target_longi) - ObjectPositionSetting.CameraDegree() - 180);
                    //Quaternion looktarget = Quaternion.LookRotation(entity.position, Vector3.up);
                    //looktarget = looktarget * Quaternion.Inverse(gameObject.transform.rotation);
                    //arrow.transform.localRotation = looktarget;

                    var isclose = ObjectPositionSetting.DistanceInKmBetweenEarthCoordinates(Input.location.lastData.latitude, Input.location.lastData.longitude, target_lati, target_longi) * 1000;

                    arrow.transform.localEulerAngles = new Vector3(isclose < 10.0 ? 90.0f : 0.0f, degree, 0);
                    //arrow.transform.localEulerAngles = new Vector3(Vector3.Distance(NRInput.CameraCenter.position, entity.position) < 10.0 ? 90.0f : 0.0f, degree, 0);

                    distance.text = isclose.ToString("N2") + "M";

                   // distance.text = Vector3.Distance(NRInput.CameraCenter.position, entity.position).ToString("N2") + "M";
                }
                else if (string.Equals(Scenemanager.Instance.scenemode, "Webmaploader"))
                {
                    
                    var entity = GameObject.Find("TargetCreater").transform.Find("Webmaploader").transform.Find(target_name);


                    target_lati = entity.GetComponent<GPSChecker>().Latitude;
                    target_longi = entity.GetComponent<GPSChecker>().Longitude;
                    
                    var degree = (float)(ObjectPositionSetting.BearingP1toP2(Input.location.lastData.latitude, Input.location.lastData.longitude, target_lati, target_longi) - ObjectPositionSetting.CameraDegree() - 180);
                    //Quaternion looktarget = Quaternion.LookRotation(entity.position, Vector3.up);
                    //looktarget = looktarget * Quaternion.Inverse(gameObject.transform.rotation);
                    //arrow.transform.localRotation = looktarget;

                    var isclose = ObjectPositionSetting.DistanceInKmBetweenEarthCoordinates(Input.location.lastData.latitude, Input.location.lastData.longitude, target_lati, target_longi) * 1000;

                    arrow.transform.localEulerAngles = new Vector3(isclose < 10.0 ? 90.0f : 0.0f, degree, 0);
                    //arrow.transform.localEulerAngles = new Vector3(Vector3.Distance(NRInput.CameraCenter.position, entity.position) < 10.0 ? 90.0f : 0.0f, degree, 0);

                    distance.text = isclose.ToString("N2") + "M";
                }

               
                //PositionInitialize();
            }

           

            public void GetLocation(string name, double lat, double longi)
            {
                target_name = name;
                if(!arrow.activeSelf)
                {
                    arrow.SetActive(true);
                }
                target_lati = lat;
                target_longi = longi;
            }

            public void GetTargetObject(Vector3 target)
            {
                arrow_target = target;
            }
            
           
        }
    }
}

