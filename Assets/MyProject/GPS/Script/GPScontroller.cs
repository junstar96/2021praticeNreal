﻿///여기서 gps값을 계속 받아오는 것이다.

using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Android;
using NRKernal;

public class GPScontroller : MonoBehaviour
{
    //
    //private Vector2 targetCoordinates;
    //private Vector2 deviceCoordinates;

    //나침반 방향을 확인해보자.
    private Quaternion currentheading;

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

    private float connectTime = 3.0f;
    public LocationInfo myGPSpos
    {
        get
        {
            if (Input.location.isEnabledByUser)
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

    IEnumerator Start()
    {
        Debug.Log("get start");


        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Debug.Log("permission check");
            Permission.RequestUserPermission(Permission.FineLocation);//이걸 해줘야 안드로이드에서 gps를 사용할 수 있다.

        }

        Input.location.Start(0, 0);
        Input.compass.enabled = true;


        yield return new WaitForSeconds(connectTime);

       


        if (!Input.location.isEnabledByUser)
        {
            isConnected = false;
            Debug.Log("User has not enabled GPS");
            yield break;
        }

       


        //int maxWait = 20;
        //while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        //{
        //    yield return new WaitForSeconds(1);
        //    maxWait--;
        //}
        //if (maxWait < 1)
        //{
        //    isConnected = false;
        //    Debug.Log("Timed out");
        //    yield break;
        //}



        isConnected = true; 
        longi = Input.location.lastData.longitude;
        lat = Input.location.lastData.latitude;

        

        StartCoroutine(updateGPS());
        

        //Stop service if there is no need to query location updates continuously
        //Input.location.Stop();
    }

    private void OnEnable()
    {
        //StartCoroutine(StartLocationService());
        //StartCoroutine(updateGPS());
    }

    private void OnDisable()
    {
        //StopCoroutine(StartLocationService());
        //StopCoroutine(updateGPS());
        Input.location.Stop();
    }

    public IEnumerator StartLocationService()
    {
        if (Input.location.isEnabledByUser)
        {
            Debug.Log("User has not enabled GPS");
            yield break;
        }

       
        Input.location.Start(0,0);

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

        
        //while(Input.location.status != LocationServiceStatus.Running)
        //{
        //    Debug.Log("connecting test");
        //}

        isConnected = true;
        lat = Input.location.lastData.latitude;
        longi = Input.location.lastData.longitude;
        StartCoroutine(updateGPS());
    }


    public IEnumerator updateGPS()
    {
        float UPDATE_TIME = 1.0f;
        WaitForSeconds updateTime = new WaitForSeconds(UPDATE_TIME);

       
        while (true)
        {

            /* mapScript.Refresh();*/
            if(Input.location.isEnabledByUser == true)
            {
                longi = Input.location.lastData.longitude;
                lat = Input.location.lastData.latitude;
                currentGPSposition = Input.location.lastData;


              
            }
            else
            {
                Debug.Log("not connected");
            }

            yield return updateTime;
        }
    }

    public static double ConvertDecimalDegreesToRadians(double deg)
    {
        return (deg * Math.PI / 180);
    }

    public static double ConvertRadiansToDecimalDegrees(double rad)
    {
        return (rad * 180 / Math.PI);
    }

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

    
    public double bearingP1toP2(double P1_latitude, double P1_longitude, double P2_latitude, double P2_longitude)
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

    //public double GPSradian(double target_lat, double target_longi, double my_lat, double my_longi)
    //{
    //    double radiusOfEarth = 6371.009;
    //    double circumferenceOfEarth = 2 * Math.PI * radiusOfEarth;
    //    double distancePerlat = circumferenceOfEarth / 360; //경도 당 거리(km)
    //    double distancePerLongi = Math.Cos(target_longi * Math.PI / 360) * circumferenceOfEarth / 360;//위도당 거리



    //    double lat = my_lat - target_lat;
    //    double longi = my_longi - target_longi;

    //    double theta = Math.Atan(lat / longi);







    //}
    // */
}


