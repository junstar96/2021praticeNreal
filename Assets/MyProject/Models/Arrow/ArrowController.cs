using UnityEngine;
using UnityEngine.Events;

namespace NRKernal.NRExamples
{
    namespace MyArrowProject
    {
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
            // Start is called before the first frame update

            //간단하게 마리오아울렛부터

            

            //이 두 개를 이용해서 회전시킬 수 있는 것인지 알아보자.
            //private double degree;
            //public float checktime;

            //private bool setting_pos;
            //public UnityEngine.UI.Text check_target_point;

            //GPScontroller를 받아온다.
            //private GPScontroller gpscontroller;

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

            private void PositionInitialize()
            {

                //float magnet_radian = Input.location.isEnabledByUser ? ((float)ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading
                //    - Camera.main.transform.eulerAngles.y/* - (float)degree_correction*/) * Mathf.PI / 180 : Mathf.PI / 2.0f;

                

            }


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
                    Quaternion looktarget = Quaternion.LookRotation(entity.position, Vector3.up);
                    looktarget = looktarget * Quaternion.Inverse(gameObject.transform.rotation);
                    arrow.transform.localRotation = looktarget;
                    distance.text = Vector3.Distance(NRInput.CameraCenter.position, entity.position).ToString("N2") + "M";
                }
                else if (string.Equals(Scenemanager.Instance.scenemode, "Webmaploader"))
                {

                    var entity = GameObject.Find("TargetCreater").transform.Find("Webmaploader").transform.Find(target_name);
                    Quaternion looktarget = Quaternion.LookRotation(entity.position, Vector3.up);
                    looktarget = looktarget * Quaternion.Inverse(gameObject.transform.rotation);
                    arrow.transform.localRotation = looktarget;
                    distance.text = Vector3.Distance(NRInput.CameraCenter.position, entity.position).ToString("N2") + "M";
                }

               
                PositionInitialize();
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

