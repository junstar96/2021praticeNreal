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
            public ARLocation.WebMapLoader test_pos;

           
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
                while(!test_pos.MakeFinish)
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
            }

            // Update is called once per frame
            //void Update()
            //{

            //}
        }
    }
}