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
        private GPScontroller gpscontroller;

        void Start()
        {
            gpscontroller = GetComponent<GPScontroller>();
            mygpsinfo = gpscontroller.myGPSpos;

            lati.text = mygpsinfo.latitude.ToString();
            longi.text = mygpsinfo.longitude.ToString();
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}
