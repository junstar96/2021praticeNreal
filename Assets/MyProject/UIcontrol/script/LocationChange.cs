using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal.NRExamples;

namespace MyArrowProject
{
    public class LocationChange : MonoBehaviour
    {
        // Start is called before the first frame update



        //public UnityEngine.Events.UnityEvent changelocation;
        public Text adressPrint;
        public double target_lati;
        public double target_longi;
        public int count;
        private Button yourButton;
        private BUSstationXML parantBUSstationXML;

        private void Awake()
        {
            yourButton = GetComponent<Button>();
            //Debug.Log("count : " + count);
            parantBUSstationXML = GetComponentInParent<ButtonController>().xml_pos;

      
    }

        private void OnEnable()
        {
            yourButton.onClick.AddListener(ChangeTargetGPS);
            Debug.Log("text name : " + adressPrint.text);
        }

        private void Start()
        {

        }

        // Update is called once per frame
        //void Update()
        //{

        //}

        public void ChangeTargetGPS()
        {
            Debug.Log("ChangeTargetGPS()");
            parantBUSstationXML.GetTargetGPS(adressPrint.text, target_lati, target_longi);
        }
    }
}
