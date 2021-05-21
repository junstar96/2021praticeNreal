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
        /// <summary>
        /// 화살표가 목적지를 가리킨다.
        /// </summary>
        public class ArrowController : MonoBehaviour, MygpsTrans
        {
            
            //화살표의 프리팹
            public GameObject arrow;

            /// <summary>화살표가 처음에는 안 보이고 나중에 ui 버튼을 누르고 나서 보인다.
            public bool isArrowview = false;

            public UnityEvent arrowset;
            //private Transform player;

            //거리를 표시하는 텍스트
            public UnityEngine.UI.Text distance;

            

            //원래는 이걸로 화살표의 타겟을 정했음.
            private Vector3 arrow_target = new Vector3(100,100,100);
            //public double first_magnetic_degree;

            //타겟의 gps 정보를 읽어서 타겟으로 삼는다.
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

           
            private void Update()
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

                TargetSelect();
               

               
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
            
            public void TargetSelect()
            {
                if (string.Equals(Scenemanager.Instance.scenemode, "BusStationScene"))
                {
                    var entity = GameObject.Find("TargetCreater").transform.Find("BusStationXML").transform.Find(target_name);
                    target_lati = entity.GetComponent<GPSChecker>().Latitude;
                    target_longi = entity.GetComponent<GPSChecker>().Longitude;

                    var degree = (float)(ObjectPositionSetting.BearingP1toP2(Input.location.lastData.latitude,
                        Input.location.lastData.longitude, target_lati, target_longi) - ObjectPositionSetting.CameraDegree() - 180);


                    var isclose = ObjectPositionSetting.DistanceInKmBetweenEarthCoordinates(
                        Input.location.lastData.latitude, Input.location.lastData.longitude, target_lati, target_longi) * 1000;

                    arrow.transform.localEulerAngles = new Vector3(isclose < 10.0 ? 90.0f : 0.0f, degree, 0);


                    distance.text = isclose.ToString("N2") + "M";
                }
                else if (string.Equals(Scenemanager.Instance.scenemode, "Webmaploader"))
                {

                    var entity = GameObject.Find("TargetCreater").transform.Find("Webmaploader").transform.Find(target_name);


                    target_lati = entity.GetComponent<GPSChecker>().Latitude;
                    target_longi = entity.GetComponent<GPSChecker>().Longitude;

                    var degree = (float)(ObjectPositionSetting.BearingP1toP2(Input.location.lastData.latitude, Input.location.lastData.longitude, target_lati, target_longi) - ObjectPositionSetting.CameraDegree() - 180);


                    var isclose = ObjectPositionSetting.DistanceInKmBetweenEarthCoordinates(Input.location.lastData.latitude, Input.location.lastData.longitude, target_lati, target_longi) * 1000;

                    //거리가 10m 안으로 들어오면 화살표가 아래를 가리킨다. 그 외에는 오브젝트를 가리킨다.
                    //오브젝트의 lookat을 사용할 경우 lookat은 전역transform 기준이라 올바르게 적용되지 않는다.
                    arrow.transform.localEulerAngles = new Vector3(isclose < 10.0 ? 90.0f : 0.0f, degree, 0);

                    distance.text = isclose.ToString("N2") + "M";
                }
            }
        }
    }
}

