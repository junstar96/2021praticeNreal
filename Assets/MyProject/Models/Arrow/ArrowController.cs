﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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


            //회사의 gps를 읽고 거리를 비교해보자.
            private double company_lat = 37.49157963966577;
            private double company_long = 126.87882734877837;


            //이 두 개를 이용해서 회전시킬 수 있는 것인지 알아보자.
            private double distance;
            private double degree;
            public float checktime;

            //public float checktime;

            //GPScontroller를 받아온다.
            private GPScontroller gpscomtroller;

            public Transform arrow;

            public Transform player;

       


            void Start()
            {
                gpscomtroller = GameObject.FindWithTag("GPS").GetComponent<GPScontroller>();
                checktime = 0.0f;
                

                player = GameObject.FindWithTag("Player").GetComponent<Transform>();
            }

            private void OnEnable()
            {

            }

            // Update is called once per frame
            void Update()
            {
                if(NRInput.GetButtonDown(ControllerButton.APP) || Input.GetKeyDown(KeyCode.P))
                {
                    arrow.gameObject.SetActive(!arrow.gameObject.activeSelf);
                }

                if (!gpscomtroller.isConnected)
                {
                    //arrow.gameObject.SetActive(false);
                    Debug.LogWarning("connected not yet");
                    company_lat = 37.47952223150887;
                    company_long = 126.88753947336387;
                }
                else
                {
                    //if (!arrow.gameObject.activeSelf)
                    //{
                    //    arrow.gameObject.SetActive(true);
                    //}
                    //여기서 내 gps 값을 받아온다.
                    company_lat = gpscomtroller.myGPSpos.latitude;
                    company_long = gpscomtroller.myGPSpos.longitude;

                    //if (company_lat < 10.0f && company_long < 10.0f)
                    //{
                    //    Debug.Log("still (0,0) position get");
                    //    company_lat = 37.47952223150887;
                    //    company_long = 126.88753947336387;
                    //}
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



                //distance = GPScontroller.BetweenDistancePoint(target_lat, target_long, company_lat, company_long);
                distance = GPScontroller.DistanceInKmBetweenEarthCoordinates(target_lat, target_long, company_lat, company_long);
                degree = gpscomtroller.bearingP1toP2(target_lat, target_long, company_lat, company_long);


                //Debug.Log("my lat :" + company_lat);
                //Debug.Log("my long : " + company_long);
                //Debug.Log("target lat :" + target_lat);
                //Debug.Log("target long : " + target_long);

                //Debug.Log("degree : " + degree);


                //Debug.Log("distance : " + distance * 1000);

                //Debug.Log("close");
                arrow.transform.rotation = Quaternion.Euler(90 - player.rotation.x, 180-(float)degree - Camera.main.transform.rotation.y, 0);

                

            }

            public void GetLocation(double lat, double longi)
            {
                target_lat = lat;
                target_long = longi;
            }

            
        }

       
    }
}

