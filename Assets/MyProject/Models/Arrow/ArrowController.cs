using UnityEngine;
using UnityEngine.Events;
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

            private double target_lati;
            private double target_longi;
            private string target_name;

            //public GameObject test_target;

            private void Awake()
            {
                arrowset = new UnityEvent();
                //player = GameObject.FindWithTag("Player").GetComponent<Transform>();
                arrowset.AddListener(SetArrow);
            }

            private void OnEnable()
            {



                //checktime = 0.0f;

                //StartCoroutine(GPSArrowUpdate());
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

            private void OnDisable()
            {
                //StopCoroutine(GPSArrowUpdate());
            }

            // Update is called once per frame
            void Update()
            {

                if (isArrowview)
                {
                    foreach (var worldobject in GameObject.FindWithTag("GPS manu").transform.Find("ARLocationRoot").transform.GetComponentsInChildren<AudioSource>())
                    {
                        if (string.Equals(worldobject.GetComponent<PlaceAtLocation>().Location.Label, target_name))
                        {
                            worldobject.Play();
                        }
                        else
                        {
                            worldobject.Stop();
                        }

                    }


                    gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(220.0f, 275f, 2.0f));
                    gameObject.transform.eulerAngles = Camera.main.transform.rotation.eulerAngles;
                    Quaternion looktarget = Quaternion.LookRotation(arrow_target, Vector3.up);
                    arrow.transform.rotation = looktarget;


#if !UNITY_EDITOR
                    double det = GPScontroller.DistanceInKmBetweenEarthCoordinates(target_lati, target_longi,
                        ARLocationProvider.Instance.CurrentLocation.latitude, ARLocationProvider.Instance.CurrentLocation.longitude) * 1000.0;
                    distance.text = "last location : " + "\n" + ARLocationProvider.Instance.LastLocation.latitude + "\n" + ARLocationProvider.Instance.LastLocation.longitude + "\n"
                        + "current location : " + "\n" + ARLocationProvider.Instance.CurrentLocation.latitude + "\n" + ARLocationProvider.Instance.CurrentLocation.longitude + "\n"
                        + "input.location :" + "\n" + Input.location.lastData.latitude + "\n" + Input.location.lastData.longitude + "\n"
                        + "distance : " + det.ToString("N2");
#endif

                }
                else
                {
                    gameObject.transform.position = new Vector3(500, 500, 500);
                }

                PositionInitialize();



            }

            //IEnumerator GPSArrowUpdate()
            //{
            //    while(true)
            //    {
            //        yield return new WaitForSeconds(0.1f);

            //        PositionInitialize();

            //    }

            //}

            public void GetLocation(string name, double lat, double longi)
            {
                target_name = name;
                //Debug.Log("getlocation name ------------ "+target_name);
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

