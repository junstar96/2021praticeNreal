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


            [Header("object spawn point")]
            public SpawnManager spawnmanager;

            //이 부분을 xml 파일을 받아오는 걸로 대체해서 이 녀석으로 죄다 받아오도록 하자. 
            //public ARLocation.WebMapLoader test_pos;

            public int child_count;

            
            //placeatlocation을 받아오면 안의 location 값을 받아올 수 있을 것 같다.

            //private void OnEnable()
            //{
            //    //var test_pos = gameobject.text

                

              
            //}
            

            private IEnumerator Start()
            {
              

                if (string.Equals(Scenemanager.Instance.scenemode, "BusStationScene"))
                {
                    yield return new WaitUntil(() => string.Equals(Scenemanager.Instance.scenename, "Main Scene"));
                    Debug.Log("scenename : " + Scenemanager.Instance.scenename);
                    yield return new WaitUntil(() => spawnmanager.busstationxml.makefinish);

                    
                    child_count = spawnmanager.gameObject.transform.Find("BusStationXML").childCount;
                }

                if (string.Equals(Scenemanager.Instance.scenemode, "Webmaploader"))
                {
                    Debug.Log("scenename : " + Scenemanager.Instance.scenename);
                    yield return new WaitUntil(() => spawnmanager.webmaploader.MakeFinish);
                    //child_count = GameObject.Find("TargetCreater").transform.Find("Webmaploader").childCount;
                    child_count = spawnmanager.gameObject.transform.Find("Webmaploader").childCount;
                }


                StartCoroutine(UntilConnecting());

            }



            IEnumerator UntilConnecting()
            {
                Debug.Log("child count :" + child_count);
                yield return new WaitForEndOfFrame();
                for(int i = 0;i<child_count;i++)
                {
                    
                    if (string.Equals(Scenemanager.Instance.scenemode, "BusStationScene"))
                    {
                        var entity = spawnmanager.gameObject.transform.Find("BusStationXML").GetChild(i);
                        button.adressPrint.text = entity.name;
                        button.target_lati = 0.0;
                        button.target_longi = 0.0;
                        button.target_transform = entity.transform;

                        var check = Instantiate(button, gameObject.transform);

                        if (!check.gameObject.activeSelf)
                        {
                            check.gameObject.SetActive(true);
                        }
                    }
                    else if(string.Equals(Scenemanager.Instance.scenemode, "Webmaploader"))
                    {
                        var entity = spawnmanager.gameObject.transform.Find("Webmaploader").GetChild(i);
                        button.adressPrint.text = entity.name;
                        button.target_lati = 0.0;
                        button.target_longi = 0.0;
                        button.target_transform = entity.transform;

                        var check = Instantiate(button, gameObject.transform);

                        if (!check.gameObject.activeSelf)
                        {
                            check.gameObject.SetActive(true);
                        }
                    }
                   

                    
                }
                
            }

            
        }
    }
}