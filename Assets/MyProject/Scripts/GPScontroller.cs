using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;
using System;

namespace NRKernal.NRExamples
{
    

    public class GPScontroller : SingletonBehaviour<GPScontroller>
    {
        //
        //private Vector2 targetCoordinates;
        //private Vector2 deviceCoordinates;

       
        public bool gpsinit = false;

       // public GameObject prefeb;

        LocationInfo currentGPSposition;

        public double detail_num = 1.0;

        [HideInInspector]
        public bool isConnected = false;

        [HideInInspector]
        public bool isUpdated = false;

        public static float lat;
        public static float longi;

        public LocationInfo myGPSpos
        {
            get
            {
                if(Input.location.isEnabledByUser)
                {
                    return currentGPSposition;
                }
                else
                {
                    Debug.LogWarning("location is not connecting");
                    return currentGPSposition;
                }
            }
        }

        private bool ready = false;

        void Start()
        {

            Permission.RequestUserPermission(Permission.FineLocation);


            StartCoroutine(StartLocationService());
            StartCoroutine(updateGPS());
            

        }

        private void OnEnable()
        {
            StartCoroutine(StartLocationService());
            StartCoroutine(updateGPS());
        }

        private void OnDisable()
        {
            StopCoroutine(StartLocationService());
            StopCoroutine(updateGPS());
        }

        public IEnumerator StartLocationService()
        {


            if (!Input.location.isEnabledByUser)
            {
                isConnected = false;
                Debug.Log("User has not enabled GPS");
                yield break;
            }
            Input.location.Start();
            int maxWait = 20;
            while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
            {
                yield return new WaitForSeconds(1);
                maxWait--;
            }
            if (maxWait < 1)
            {
                isConnected = false;
                Debug.Log("Timed out");
                yield break;
            }

            if (Input.location.status == LocationServiceStatus.Failed)
            {
                isConnected = false;
                Debug.Log("Unable to determine device location");
                yield break;
            }
            else
            {
                isConnected = true;
                longi = Input.location.lastData.longitude;
                lat = Input.location.lastData.latitude;
            }
            ready = true;
        }
        public IEnumerator updateGPS()
        {
            if (!Input.location.isEnabledByUser)
            {
                Debug.Log("User has not enabled GPS");
                yield break;
            }
            float UPDATE_TIME = 1f;
            WaitForSeconds updateTime = new WaitForSeconds(UPDATE_TIME);
            while (true)
            {
                /* mapScript.Refresh();*/
                longi = Input.location.lastData.longitude;
                lat = Input.location.lastData.latitude;
                


                SetLocation();
                yield return updateTime;
            }
        }



        // Update is called once per frame
        void Update()
        {
            
            //컨트롤러 작성은 나중에 다른 곳으로 옮기자.
           


        }

        void SetLocation()
        {
            // radius.transform.position = new Vector3(0, 0, 6);
        }

        public static double ConvertDecimalDegreesToRadians(double deg)
        {
            return (deg * Math.PI / 180);
        }

        public static double ConvertRadiansToDecimalDegrees(double rad)
        {
            return (rad * 180 / Math.PI);
        }

        /// <summary>
        /// 미터 단위로 계산할 때는 이거
        /// </summary>
        /// <param name="sLatitude"></param>
        /// <param name="sLongitude"></param>
        /// <param name="eLatitude"></param>
        /// <param name="eLongitude"></param>
        /// <returns></returns>
        public static double BetweenDistancePoint(double sLatitude, double sLongitude, double eLatitude,
                                   double eLongitude)
        {
            double theta, dist;

            if(sLatitude == eLatitude && sLongitude == eLongitude)
            {
                return 0;
            }

            theta = sLongitude - eLongitude;

            dist = Math.Sin(ConvertDecimalDegreesToRadians(sLatitude)) *
                Math.Sin(ConvertDecimalDegreesToRadians(eLatitude)) +
                Math.Cos(ConvertDecimalDegreesToRadians(sLatitude)) *
                Math.Cos(ConvertDecimalDegreesToRadians(eLatitude)) *
                Math.Cos(ConvertDecimalDegreesToRadians(theta));


            dist = Math.Acos(dist);
            dist = ConvertRadiansToDecimalDegrees(dist);
            dist = dist * 60 * 1.1515;
            dist = dist * 1.609344 * 1000; //미터단위로 변경

            return dist;
        }
        /// <summary>
        /// 야드 단위로 계산할 때는 이거
        /// </summary>
        /// <param name="sLatitude"></param>
        /// <param name="sLongitude"></param>
        /// <param name="eLatitude"></param>
        /// <param name="eLongitude"></param>
        /// <returns></returns>
        public static double Calculate(double sLatitude, double sLongitude, double eLatitude,
                                   double eLongitude)
        {
            var radiansOverDegrees = (Math.PI / 180.0);

            var sLatitudeRadians = sLatitude * radiansOverDegrees;
            var sLongitudeRadians = sLongitude * radiansOverDegrees;
            var eLatitudeRadians = eLatitude * radiansOverDegrees;
            var eLongitudeRadians = eLongitude * radiansOverDegrees;

            var dLongitude = eLongitudeRadians - sLongitudeRadians;
            var dLatitude = eLatitudeRadians - sLatitudeRadians;

            var result1 = Math.Pow(Math.Sin(dLatitude / 2.0), 2.0) +
                          Math.Cos(sLatitudeRadians) * Math.Cos(eLatitudeRadians) *
                          Math.Pow(Math.Sin(dLongitude / 2.0), 2.0);

            // Using 3956 as the number of miles around the earth
            var result2 = 3956.0 * 2.0 *
                          Math.Atan2(Math.Sqrt(result1), Math.Sqrt(1.0 - result1));

            return result2;
        }

        /// <summary>
        /// 회전 방향을 결정하는 방법이 이것인지 확인해보도록 하자.
        /// </summary>
        /// <param name="P1_latitude"></param>
        /// <param name="P1_longitude"></param>
        /// <param name="P2_latitude"></param>
        /// <param name="P2_longitude"></param>
        /// <returns></returns>
        public short bearingP1toP2(double P1_latitude, double P1_longitude, double P2_latitude, double P2_longitude)
        {
            // 현재 위치 : 위도나 경도는 지구 중심을 기반으로 하는 각도이기 때문에 라디안 각도로 변환한다.
            double Cur_Lat_radian = P1_latitude * (3.141592 / 180);
            double Cur_Lon_radian = P1_longitude * (3.141592 / 180);


            // 목표 위치 : 위도나 경도는 지구 중심을 기반으로 하는 각도이기 때문에 라디안 각도로 변환한다.
            double Dest_Lat_radian = P2_latitude * (3.141592 / 180);
            double Dest_Lon_radian = P2_longitude * (3.141592 / 180);

            // radian distance
            double radian_distance = 0;
            radian_distance = Math.Acos(Math.Sin(Cur_Lat_radian) * Math.Sin(Dest_Lat_radian) + Math.Cos(Cur_Lat_radian) * Math.Cos(Dest_Lat_radian) * Math.Cos(Cur_Lon_radian - Dest_Lon_radian));

            // 목적지 이동 방향을 구한다.(현재 좌표에서 다음 좌표로 이동하기 위해서는 방향을 설정해야 한다. 라디안값이다.
            double radian_bearing = Math.Acos((Math.Sin(Dest_Lat_radian) - Math.Sin(Cur_Lat_radian) * Math.Cos(radian_distance)) / (Math.Cos(Cur_Lat_radian) * Math.Sin(radian_distance)));		// acos의 인수로 주어지는 x는 360분법의 각도가 아닌 radian(호도)값이다.		

            double true_bearing = 0;
            if (Math.Sin(Dest_Lon_radian - Cur_Lon_radian) < 0)
            {
                true_bearing = radian_bearing * (180 / 3.141592);
                true_bearing = 360 - true_bearing;
            }
            else
            {
                true_bearing = radian_bearing * (180 / 3.141592);
            }

            return (short)true_bearing;
        }
        // */


    }
}


 