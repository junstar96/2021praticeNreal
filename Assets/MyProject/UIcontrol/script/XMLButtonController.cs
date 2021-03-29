using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ARLocation;

namespace NRKernal.NRExamples
{
    namespace MyArrowProject
    {
        public class XMLButtonController : MonoBehaviour
        {
            // Start is called before the first frame update
            public LocationChange button;

            //이 부분을 xml 파일을 받아오는 걸로 대체해서 이 녀석으로 죄다 받아오도록 하자. 
            //public ARLocation.WebMapLoader test_pos;

            public WebMapLoader test_pos;

            
            //placeatlocation을 받아오면 안의 location 값을 받아올 수 있을 것 같다.

            //private void OnEnable()
            //{
            //    //var test_pos = gameobject.text

                

              
            //}
            void Start()
            {

                ////var test_pos = gameobject.text
                //test_pos = GameObject.FindWithTag("GPS").GetComponent<ARLocation.WebMapLoader>();


                //foreach(var entity in test_pos.XmlListForNreal)
                //{
                //    button.count = entity.id;
                //    button.adressPrint.text = entity.name;
                //    button.target_lati = entity.lat;
                //    button.target_longi = entity.lng;


                //    var check = Instantiate(button, gameObject.transform);

                //    if(!check.gameObject.activeSelf)
                //    {
                //        check.gameObject.SetActive(true);
                //    }
                //}


                StartCoroutine(UntilConnecting());

            }

            private void OnDisable()
            {
                Debug.Log("when called?");
            }

            IEnumerator UntilConnecting()
            {
                while (!test_pos.MakeFinish)
                {
                    Debug.Log("not yet leading");
                    yield return new WaitForSeconds(0.01f);
                }

                foreach (var entity in test_pos.XmlListForNreal)
                {
                    button.adressPrint.text = entity.name;
                    button.target_lati = entity.lat;
                    button.target_longi = entity.lng;


                    var check = Instantiate(button, gameObject.transform);

                    if (!check.gameObject.activeSelf)
                    {
                        check.gameObject.SetActive(true);
                    }
                }
              
                //else if(test_pos.GetComponent<BUSstationXML>() != null)
                //{
                //    int list_length = test_pos.GetComponent<BUSstationXML>().List_length;
                //    for (int i = 0; i < list_length; i++)
                //    {
                //        BUSstationXML.GPSinfo gpsinfo = test_pos.GetComponent<BUSstationXML>().ButtonInfo(i);

                //        button.adressPrint.text = gpsinfo.name;
                //        button.target_lati = gpsinfo.lati;
                //        button.target_longi = gpsinfo.longi;

                //        var check = Instantiate(button, gameObject.transform);

                //        if (!check.gameObject.activeSelf)
                //        {
                //            check.gameObject.SetActive(true);
                //        }
                //    }
                //}
                //else
                //{
                //    Debug.LogError("something connecting fail : xmlbuttoncontroller");
                //}
            }

            // Update is called once per frame
            //void Update()
            //{

            //}
        }
    }
}