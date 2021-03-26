using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace NRKernal.NRExamples
{
    public class GPSprint : MonoBehaviour
    {
        // Start is called before the first frame update


        private LocationInfo mygpsinfo;
        public Text lati;
        public Text longi;
        public Text isconnecting;
        private GPScontroller gpscontroller;
        private float time = 0.0f;
        

        void Start()
        {
            gpscontroller = GetComponent<GPScontroller>();
            

            
           

            if(!Input.location.isEnabledByUser)
            {
                isconnecting.text = "not yet";
            }
            else
            {
                isconnecting.text = "connected";
            }
        }

        // Update is called once per frame
        void Update()
        {
            time += Time.deltaTime;
            mygpsinfo = gpscontroller.myGPSpos;
            lati.text = mygpsinfo.latitude.ToString();
            longi.text = mygpsinfo.longitude.ToString();
            
            
            if (time > 1.0f)
            {
               


                Debug.Log("lati : " + Input.location.lastData.latitude + "," + mygpsinfo.latitude);
                Debug.Log("longi : " + Input.location.lastData.longitude + "," + mygpsinfo.longitude);
                Debug.Log("headingaccuracy : " + Input.compass.headingAccuracy);
                Debug.Log("margneticheading : " + Input.compass.magneticHeading);
                time = 0.0f;
            }
        }
    }
}
