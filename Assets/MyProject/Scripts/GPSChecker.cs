using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace NRKernal.NRExamples
{
    
    

    public class GPSChecker : MonoBehaviour
    {
        //GPS값들을 읽어온다. 
        //읽어온 후 거리 안에 존재한다면 구현한다.

        

        //playerpivot이 있을 위치 : 0.3, 0.1111, 0.5

        /// <summary>
        /// 마리오 아울렛에 표시가 될 오브젝트
        /// </summary>
        //public GameObject mario_aulet;

        /// <summary>gps를 따라가는 오브젝트</summary>
        public GameObject arrow;

        public float checktime;
        //private GPScontroller gpscomtroller;
       
        
        // Start is called before the first frame update
        void Start()
        {
            Instantiate(arrow, new Vector3(0.3f, 0.1111f, 0.5f), arrow.transform.rotation);
        }

        private void OnEnable()
        {
            Instantiate(arrow, new Vector3(0.3f, 0.1111f, 0.5f), arrow.transform.rotation);
        }

        // Update is called once per frame
        void Update()
        {
           //if(!gpscomtroller.isConnected)
           // {
           //     Debug.LogWarning("connected not yet");
           // }
           // else
           // {
           //     //여기서 내 gps 값을 받아온다.
           //     company_lat = gpscomtroller.myGPSpos.latitude;
           //     company_long = gpscomtroller.myGPSpos.longitude;
           // }
           // checktime += Time.deltaTime;
            

           // if(checktime > 1.0f)
           // {
           //     StartCoroutine(GPSArrowUpdate());
           //     checktime = 0.0f;
           // }
           


        }

        //IEnumerator GPSArrowUpdate()
        //{
        //    yield return new WaitForSeconds(0.1f);

        //    distance = GPScontroller.BetweenDistancePoint(mario_lat, mario_long, company_lat, company_long);
        //    degree = gpscomtroller.bearingP1toP2(mario_lat, mario_long, company_lat, company_long);

        //    Debug.Log("degree : " + degree);
           

        //    Debug.Log("distance : " + distance);
            
        //    if (distance < 10)
        //    {
        //        arrow.SetActive(false);
        //    }
        //    else
        //    {
        //        if (arrow.activeSelf == false)
        //        {
        //            arrow.SetActive(true);
        //        }
        //        //Debug.Log("close");
        //        arrow.transform.rotation = Quaternion.Euler(0, (float)degree, 0);
        //    }

        //}

    }
}
