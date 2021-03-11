using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace NRKernal.NRExamples
{
    public class ArrowController : MonoBehaviour
    {
        // Start is called before the first frame update

        //간단하게 마리오아울렛부터
        private double mario_lat = 37.478778463355226;
        private double mario_long = 126.88647458597735;


        //회사의 gps를 읽고 거리를 비교해보자.
        private double company_lat = 37.47952223150887;
        private double company_long = 126.88753947336387;


        //이 두 개를 이용해서 회전시킬 수 있는 것인지 알아보자.
        private double distance;
        private double degree;

        public float checktime;

        //GPScontroller를 받아온다.
        private GPScontroller gpscomtroller;

        private Transform arrow;

        private BUSstationXML xmlcontrol;


        void Start()
        {
            gpscomtroller = GetComponent<GPScontroller>();
            arrow = GetComponentInChildren<Transform>();
            xmlcontrol = GetComponent<BUSstationXML>();
            checktime = 0.0f;
        }

        private void OnEnable()
        {
            
        }

        // Update is called once per frame
        void Update()
        {
            if (!gpscomtroller.isConnected)
            {
                Debug.LogWarning("connected not yet");
            }
            else
            {
                //여기서 내 gps 값을 받아온다.
                company_lat = gpscomtroller.myGPSpos.latitude;
                company_long = gpscomtroller.myGPSpos.longitude;
            }
            checktime += Time.deltaTime;


            if (checktime > 1.0f)
            {
                StartCoroutine(GPSArrowUpdate());
                checktime = 0.0f;
            }
        }

        IEnumerator GPSArrowUpdate()
        {
            yield return new WaitForSeconds(0.1f);

            distance = GPScontroller.BetweenDistancePoint(mario_lat, mario_long, company_lat, company_long);
            degree = gpscomtroller.bearingP1toP2(mario_lat, mario_long, company_lat, company_long);

            //Debug.Log("degree : " + degree);


            //Debug.Log("distance : " + distance);

            
             //Debug.Log("close");
            arrow.transform.rotation = Quaternion.Euler(0, -(float)degree, 0);
            


        }
        
        private void ChangeGPSfollower()
        {
            mario_lat = xmlcontrol.updated_lat;
            mario_long = xmlcontrol.updated_long;
        }
    }
}
