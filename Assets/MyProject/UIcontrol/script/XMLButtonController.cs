using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace NRKernal.NRExamples
{
    namespace MyArrowProject
    {
        public class XMLButtonController : MonoBehaviour
        {
            // Start is called before the first frame update
            public LocationChange button;

            //이 부분을 xml 파일을 받아오는 걸로 대체해서 이 녀석으로 죄다 받아오도록 하자. 
            private ARLocation.WebMapLoader test_pos;

            void Start()
            {
                //var test_pos = gameobject.text
                test_pos = GameObject.FindWithTag("GPS").GetComponent<ARLocation.WebMapLoader>();

               
                foreach(var entity in test_pos.XmlListForNreal)
                {
                    button.count = entity.id;
                    button.adressPrint.text = entity.name;
                    button.target_lati = entity.lat;
                    button.target_longi = entity.lng;


                    var check = Instantiate(button, gameObject.transform);

                    if(!check.gameObject.activeSelf)
                    {
                        check.gameObject.SetActive(true);
                    }
                }

               


            }

            // Update is called once per frame
            //void Update()
            //{

            //}
        }
    }
}