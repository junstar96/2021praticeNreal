using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using ARLocation;

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
            private double target_lat = 37.478778463355226;
            private double target_long = 126.88647458597735;
            private string target_name = string.Empty;

            //회사의 gps를 읽고 거리를 비교해보자.
            private double company_lat =37.47948981441395;
            private double company_long = 126.88759920781672;

            //private Dictionary<string, bool> dictonary;
            private Hashtable hashtable;

          

            //이 두 개를 이용해서 회전시킬 수 있는 것인지 알아보자.
            private double distance;
            //private double degree;
            public float checktime;

            //private bool setting_pos;
            //public UnityEngine.UI.Text check_target_point;

            //GPScontroller를 받아온다.
            //private GPScontroller gpscontroller;

            public Transform arrow;

            private Transform player;

            //ARLocation 포함 함수들


            private Transform arrow_target;
            //public double first_magnetic_degree;


            private void Awake()
            {
                //first_magnetic_degree = ARLocationProvider.Instance.CurrentHeading.magneticHeading;
                player = GameObject.FindWithTag("Player").GetComponent<Transform>();
                //gpscontroller = GameObject.FindWithTag("GPS").GetComponent<GPScontroller>();

                hashtable = new Hashtable();
                //dictonary = new Dictionary<string, bool>();
            }

            private void OnEnable()
            {
               
                company_lat = ARLocationProvider.Instance.Provider.CurrentLocation.latitude;
                company_long = ARLocationProvider.Instance.Provider.CurrentLocation.longitude;

                checktime = 0.0f;

                StartCoroutine(GPSArrowUpdate());
            }


            void Start()
            {
                
              
               

            }

            private void PositionInitialize()
            {
                //시작 시점에서 고개를 돌려 앱을 실행시켰을 때 보정값을 줘야 한다.
                //double degree_correction = 0.0;

                //if (ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading < 0)
                //{
                //    degree_correction = first_magnetic_degree - (360 - Math.Abs(ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading));
                //}
                //else
                //{
                //    degree_correction = first_magnetic_degree - ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading;
                //}

                float magnet_radian = Input.location.isEnabledByUser ? ((float)ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading
                    - Camera.main.transform.eulerAngles.y/* - (float)degree_correction*/) * Mathf.PI / 180 : Mathf.PI / 2.0f;

                gameObject.transform.LookAt(arrow_target.position);

            }

            private void OnDisable()
            {
                StopCoroutine(GPSArrowUpdate());
            }

            // Update is called once per frame
            void Update()
            {
                

                if (!Input.location.isEnabledByUser)
                {
                    //arrow.gameObject.SetActive(false);
                    company_lat = 37.47948981441395;
                    company_long = 126.88759920781672;
                    //Debug.Log("currentheading" + ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading);
                }
                else
                {
                    //if (!arrow.gameObject.activeSelf)
                    //{
                    //    arrow.gameObject.SetActive(true);
                    //}
                    //여기서 내 gps 값을 받아온다.
                    company_lat = ARLocationProvider.Instance.Provider.CurrentLocation.latitude;
                    company_long = ARLocationProvider.Instance.Provider.CurrentLocation.longitude;
                    //Debug.Log("currentheading" + ARLocationProvider.Instance.Provider.CurrentHeading.magneticHeading);
                }
                checktime += Time.deltaTime;
               


            }

            IEnumerator GPSArrowUpdate()
            {
                while(true)
                {
                    yield return new WaitForSeconds(0.1f);

                    PositionInitialize();
                    //degree = gpscomtroller.bearingP1toP2(target_lat, target_long, company_lat, company_long);
                    //degree = GPScontroller.ConvertDecimalDegreesToRadians(degree);


                    //확인 결과 nrframe에서 전달하는 값과 메인 카메라의 값이 같다.
                    //Debug.Log("nr frame camera pose : " + NRFrame.HeadPose.rotation.eulerAngles.x
                    //+ "," + NRFrame.HeadPose.rotation.eulerAngles.y
                    //+ "," + NRFrame.HeadPose.rotation.eulerAngles.z);
                    //Debug.Log("main camera pose : " + Camera.main.transform.rotation.eulerAngles.x
                    //+ "," + Camera.main.transform.rotation.eulerAngles.y
                    //+ "," + Camera.main.transform.rotation.eulerAngles.z);

                   
                
                }

            }

            public void GetLocation(string name, double lat, double longi)
            {
                

                
                Debug.Log("button get");  
                target_name = name;
                    
                target_lat = lat;
                target_long = longi;

                PositionInitialize();
            }

            public void GetTargetObject(Transform target)
            {
                arrow_target = target;
            }
        }

       
    }
}

