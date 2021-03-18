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
            public LocationChange button;

            //이 부분을 xml 파일을 받아오는 걸로 대체해서 이 녀석으로 죄다 받아오도록 하자. 
            [HideInInspector]
            public BUSstationXML test_pos;

            void Start()
            {
                //var test_pos = gameobject.text

                test_pos = FindObjectOfType<BUSstationXML>();

                for (int i = 0; i < test_pos.List_length; i++)
                {
                    BUSstationXML.GPSinfo buttoninfo = test_pos.ButtonInfo(i);
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

