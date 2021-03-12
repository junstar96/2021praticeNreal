using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal.NRExamples;

namespace NRKernal.NRExamples
{
    namespace MyArrowProject
    {
        public class ButtonController : MonoBehaviour
        {
            // Start is called before the first frame update

            public BUSstationXML xml_pos;
            public LocationChange button;

            void Start()
            {
                for (int i = 0; i < xml_pos.List_length; i++)
                {
                    BUSstationXML.GPSinfo buttoninfo = xml_pos.ButtonInfo(i);
                    button.count = i;
                    button.adressPrint.text = buttoninfo.name;
                    button.target_lati = buttoninfo.lati;
                    button.target_longi = buttoninfo.longi;

                    Instantiate(button, gameObject.transform);
                }


            }

            // Update is called once per frame
            //void Update()
            //{

            //}
        }
    }
}

