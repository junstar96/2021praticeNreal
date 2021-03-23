﻿using System.Collections;
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
            


            //이 두 개를 이용해서 회전시킬 수 있는 것인지 알아보자.
            private double distance;
            private double degree;
            public float checktime;

            private bool setting_pos;
            

            //GPScontroller를 받아온다.
            private GPScontroller gpscomtroller;

            public Transform arrow;

            public Transform player;

            //ARLocation 포함 함수들
            private WebMapLoader webmaploader;
       


            void Start()
            {
                setting_pos = false;
                gpscomtroller = GameObject.FindWithTag("GPS").GetComponent<GPScontroller>();
                webmaploader = GameObject.FindWithTag("GPS").GetComponent<WebMapLoader>();
                checktime = 0.0f;
                

                player = GameObject.FindWithTag("Player").GetComponent<Transform>();

               
            }

            // Update is called once per frame
            void Update()
            {
                

                if (!gpscomtroller.isConnected)
                {
                    //arrow.gameObject.SetActive(false);
                    Debug.LogWarning("connected not yet");
                    company_lat = 37.47948981441395;
                    company_long = 126.88759920781672;
                }
                else
                {
                    //if (!arrow.gameObject.activeSelf)
                    //{
                    //    arrow.gameObject.SetActive(true);
                    //}
                    //여기서 내 gps 값을 받아온다.
                    company_lat = Input.location.lastData.latitude;
                    company_long = Input.location.lastData.longitude;

                    Debug.Log("company_lat :" + company_lat);
                    Debug.Log("company_long :" + company_long);

                    if (company_lat < 10.0f && company_long < 10.0f)
                    {
                        Debug.Log("still (0,0) position get");
                        company_lat = 37.47948981441395;
                        company_long = 126.88759920781672;
                    }
                }
                checktime += Time.deltaTime;


                //Debug.Log("close");
                if(checktime >= 1.0f)
                {
                    Debug.Log("lotation");
                    StartCoroutine(GPSArrowUpdate());
                    checktime = 0.0f;
                }
               


            }

            IEnumerator GPSArrowUpdate()
            {
                yield return new WaitForSeconds(0.1f);

                distance = GPScontroller.DistanceInKmBetweenEarthCoordinates(target_lat, target_long, company_lat, company_long) * 1000;
                degree = gpscomtroller.bearingP1toP2(target_lat, target_long, company_lat, company_long);
                degree = GPScontroller.ConvertDecimalDegreesToRadians(degree);





                foreach (var target_follow in webmaploader.stagePoint)
                {


                    if(target_follow.GetComponent<PlaceAtLocation>().Location.Label == target_name)
                    {
                        target_follow.SetActive(true);
                        target_follow.transform.GetChild(0).gameObject.SetActive(true);

                        Location location = ARLocationProvider.Instance.GetLocationForWorldPosition(Camera.main.transform.position);


                        Debug.Log("location data " + location.Latitude + "," + location.Longitude);
    

                        //degree = degree * Mathf.PI / 360;



                        //gameObject.transform.rotation = Quaternion.LookRotation(target_follow.transform.position, Vector3.forward);


                       double xx = GPScontroller.DistanceInKmBetweenEarthCoordinates(0, target_long, 0, company_long) * 1000,
                      zz = GPScontroller.DistanceInKmBetweenEarthCoordinates(target_lat, 0, company_lat, 0) * 1000;
                       //xx = xx * Mathf.Cos((float)degree) - zz * Mathf.Sin((float)degree);
                       //zz = zz * Mathf.Cos((float)degree) + zz * Mathf.Sin((float)degree);

                       Debug.Log("xx : " + xx + "zz : " + zz + "distance :" + distance); 
                     
                      

                       Vector3 position = new Vector3((float)degree * Mathf.Cos((float)degree), 0.0f, (float)(degree * Math.Sin(degree)));


                       position.Normalize();
                       position = Quaternion.AngleAxis(Input.compass.trueHeading, Vector3.up) * position;
                       //Debug.Log("(x,y,z) : " + position.x * (float)distance + "," + position.y + "," + position.z * (float)distance);
                       target_follow.transform.GetChild(0).gameObject.transform.position = position * (float)distance;

                       gameObject.transform.LookAt(target_follow.transform.GetChild(0).gameObject.transform.position);
                       setting_pos = true;
                     
                     
                     

                    }
                    else
                    {
                        target_follow.SetActive(false);
                    }
                }

                //if(distance < 10)
                //{
                //    //Debug.Log("close");
                //    arrow.transform.rotation = Quaternion.Euler(180 - player.rotation.x, 180 - (float)degree - Camera.main.transform.rotation.y, 0);
                //}
                //else
                //{
                    
                //    //Debug.Log("close");
                //    arrow.transform.rotation = Quaternion.Euler(90 - player.rotation.x, 180 - (float)degree - Camera.main.transform.rotation.y, 0);
                //}
                

                

            }

            public void GetLocation(string name, double lat, double longi)
            {
                if(setting_pos == true && target_name != name)
                {
                    setting_pos = false;
                }
                   
                target_name = name;
                    
                target_lat = lat;
                target_long = longi;
            }

            
        }

       
    }
}

