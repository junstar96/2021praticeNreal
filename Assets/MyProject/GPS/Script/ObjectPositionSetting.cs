//GPS 정보를 변경하는 일을 하거나 gps를 이용해서 할 수 있는 거리, 각도 등은 여기서 사용한다.
//회전을 시킬 때 필요한 회전 각도를 여기서 받거나
//그 외 여러 가지를 실험한 흔적.
//
//


namespace NRKernal.NRExamples.MyArrowProject
{
    using System;
    using UnityEngine;
    public class ObjectPositionSetting : MonoBehaviour
    {

        /// <summary>
        /// nreal에서 제공하는 카메라의 각도를 0~360에서
        /// -180~180으로 바꿔 설정했다.
        /// </summary>
        /// <returns></returns>
        public static float CameraDegree()
        {
            float degree = NRSessionManager.Instance.CenterCameraAnchor.eulerAngles.y < 180 ?
                NRSessionManager.Instance.CenterCameraAnchor.eulerAngles.y : -(360 - NRKernal.NRSessionManager.Instance.CenterCameraAnchor.eulerAngles.y);




            return degree;
        }

        /// <summary>
        /// compass에서 북쪽 방향을 가리키는 값을 받아온다.
        /// input.compass.enable = true를 설정하지 않을 경우 밑의 값이 나온다.
        /// </summary>
        /// <returns></returns>
        public static float MagnetDegree()
        {
            float degree;

            if(Input.compass.enabled)
            {
                degree = Input.compass.trueHeading;
                return degree;
            }
           else
            {
                Debug.Log("gyro not yet");
                degree = 0.0f;
                return degree;
            }

            
        }
        static public Vector3 CheckConvertGPS(double latitude, double longitude)
        {
            var rad = Math.PI / 180;

            var lat = latitude * rad;
            var lon = longitude * rad;
            var a = 6378.137 * 1000;
            var e2 = 0.00669437999014;
            var N = a / Math.Sqrt(1 - e2 * Math.Pow(Math.Sin(lat), 2));

            var x = N * Math.Cos(lat) * Math.Cos(lon);
            var y = N * Math.Cos(lat) * Math.Sin(lon);
            var z = (1 - e2) * N * Math.Sin(lat);

            return new Vector3((float)x, (float)y, (float)z);
        }

        /// <summary>
        /// gps를 월드 좌표로 바꾸기 위한 함수
        /// </summary>
        /// <param name="player_lat"></param>
        /// <param name="player_lng"></param>
        /// <param name="target_lat"></param>
        /// <param name="target_lng"></param>
        /// <returns></returns>
        static public Vector2 GPSConvertWorldPos(double player_lat, double player_lng, double target_lat, double target_lng)
        {
            var rad = Math.PI / 180;
            var lat = player_lat * rad;
            var lon = player_lng * rad;
            var p1 = CheckConvertGPS(player_lat, player_lng);
            var p2 = CheckConvertGPS(target_lat, target_lng);
            var delta = p2 - p1;

            var slat = Math.Sin(lat);
            var clat = Math.Cos(lat);
            var slon = Math.Sin(lon);
            var clon = Math.Cos(lon);

            var e = -slon * delta.x + clon * delta.y;
            var n = -clon * slat * delta.x - slat * slon * delta.y + clat * delta.z;

            Debug.Log("custom pos : " + new Vector3((float)e, 0, (float)n));

            return new Vector2((float)n, (float)e);
        }

        /// <summary>
        /// 각도를 라디안 값으로 바꾼다.
        /// </summary>
        /// <param name="deg"></param>
        /// <returns></returns>
        public static double ConvertDecimalDegreesToRadians(double deg)
        {
            return (deg * Math.PI / 180);
        }

        /// <summary>
        /// 라디안 값을 각도로 바꾼다.
        /// </summary>
        /// <param name="rad"></param>
        /// <returns></returns>
        public static double ConvertRadiansToDecimalDegrees(double rad)
        {
            return (rad * 180 / Math.PI);
        }


        /// <summary>
        /// gps 간의 거리를 km 단위로 반환한다. 
        /// </summary>
        /// <param name="lat1"></param>
        /// <param name="lon1"></param>
        /// <param name="lat2"></param>
        /// <param name="lon2"></param>
        /// <returns>미터 단위가 필요하면 반환 값에 1000을 곱한다.</returns>
        public static double DistanceInKmBetweenEarthCoordinates(double lat1, double lon1, double lat2, double lon2)
        {
            var earthRadiusKm = 6371;

            var dLat = ConvertDecimalDegreesToRadians(lat2 - lat1);
            var dLon = ConvertDecimalDegreesToRadians(lon2 - lon1);

            lat1 = ConvertDecimalDegreesToRadians(lat1);
            lat2 = ConvertDecimalDegreesToRadians(lat2);

            var a = Math.Sin(dLat / 2) * Math.Sin(dLat / 2) +
                    Math.Sin(dLon / 2) * Math.Sin(dLon / 2) * Math.Cos(lat1) * Math.Cos(lat2);
            var c = 2 * Math.Atan2(Math.Sqrt(a), Math.Sqrt(1 - a));
            return earthRadiusKm * c;
        }

        public static double CalculTheta(double target_lat, double target_longi, double my_lat, double my_longi)
        {
            var lat = target_lat - my_lat;
            var longi = target_longi - my_longi;


            double theta = Math.Atan(lat / longi);


            return theta;
        }

        //야드 계산
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


        public static double BearingP1toP2(double P1_latitude, double P1_longitude, double P2_latitude, double P2_longitude)
        {
            // 현재 위치 : 위도나 경도는 지구 중심을 기반으로 하는 각도이기 때문에 라디안 각도로 변환한다.
            double Cur_Lat_radian1 = ConvertDecimalDegreesToRadians(P1_latitude);
            double Cur_Lat_radian2 = ConvertDecimalDegreesToRadians(P2_latitude);
            double Cur_Longi_radian1 = ConvertDecimalDegreesToRadians(P1_longitude);
            double Cur_Longi_radian2 = ConvertDecimalDegreesToRadians(P2_longitude);




            double y = Math.Sin(Cur_Longi_radian2 - Cur_Longi_radian1) * Math.Cos(Cur_Lat_radian2);
            double x = Math.Cos(Cur_Lat_radian1) * Math.Sin(Cur_Lat_radian2) - Math.Sin(Cur_Lat_radian1) * Math.Cos(Cur_Lat_radian2) * Math.Cos(Cur_Longi_radian2 - Cur_Longi_radian1);
            double theta = Math.Atan2(y, x);

            return (ConvertRadiansToDecimalDegrees(Math.Atan2(y, x) + 360.0)) % 360;

        }
    }
}