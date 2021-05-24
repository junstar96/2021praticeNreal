namespace NRKernal.NRExamples
{

    namespace MyArrowProject
    {
        using UnityEngine;
        using UnityEngine.Events;
        using System.Collections.Generic;

        /// <summary>
        /// 부모쪽에서 데이터를 보낼 때
        /// </summary>
        /// <param name="name"></param>
        /// <param name="lati"></param>
        /// <param name="longi"></param>
        public delegate void DataPushEventHandler(string name, double lati, double longi);

        /// <summary>
        /// 자식쪽에서 데이터를 보낼 때
        /// </summary>
        /// <param name="name"></param>
        /// <param name="lati"></param>
        /// <param name="longi"></param>
        public delegate void DataGetEventHandler(string name, double lati, double longi);
        /// <summary>
        /// 화살표가 목적지를 가리킨다.
        /// </summary>
        public class ArrowController : MonoBehaviour, MygpsTrans
        {
            
            //화살표의 프리팹
            public GameObject arrow;

            /// <summary>화살표가 처음에는 안 보이고 나중에 ui 버튼을 누르고 나서 보인다.
            public bool isArrowview = false;

            public UnityEvent arrowset;
            //private Transform player;

            //거리를 표시하는 텍스트
            public UnityEngine.UI.Text distance;

            public float compareDistance = 5.0f;

            //원래는 이걸로 화살표의 타겟을 정했음.
            private Vector3 arrow_target = new Vector3(100,100,100);
            private Vector3 arrowDown = Vector3.down;
            //public double first_magnetic_degree;

            //타겟의 gps 정보를 읽어서 타겟으로 삼는다.
            public double target_lati;
            public double target_longi;
            private string target_name = string.Empty;

            private void Awake()
            {
                arrowset.AddListener(SetArrow);
            }


            public void SetArrow()
            {
                isArrowview = true;
            }

           
            private void Update()
            {
                if(target_name == string.Empty)
                {
                    arrow.SetActive(false);
                    distance.gameObject.SetActive(false);
                    return;
                }

                if(!distance.gameObject.activeSelf)
                {
                    distance.gameObject.SetActive(true);
                }

                TargetSelect();
               
            }

           

            public void GetLocation(string name, double lat, double longi)
            {
                target_name = name;
                if(!arrow.activeSelf)
                {
                    arrow.SetActive(true);
                }
                target_lati = lat;
                target_longi = longi;
            }

            public void GetTargetObject(Vector3 target)
            {
                arrow_target = target;
            }
            

            /// <summary>
            /// 타겟을 찾고 나서 그 타겟을 화살표가 가리킨다.
            /// </summary>
            public void TargetSelect()
            {
                Transform entity = transform;
                if (string.Equals(Scenemanager.Instance.scenemode, "BusStationScene"))
                {
                    entity = GameObject.Find("TargetCreater").transform.Find("BusStationXML").transform.Find(target_name);
                }
                else if (string.Equals(Scenemanager.Instance.scenemode, "Webmaploader"))
                {
                    entity = GameObject.Find("TargetCreater").transform.Find("Webmaploader").transform.Find(target_name);
                }


                var target_position = new Vector3(entity.transform.position.x, arrow.transform.position.y, entity.transform.position.z);
                var isclose = Vector3.Distance(target_position, arrow.transform.position);
                arrowDown = Vector3.down + arrow.transform.position;

                arrow.transform.LookAt(isclose > compareDistance ? entity.transform.position : arrowDown, arrow.transform.up);

                distance.text = isclose.ToString("N2") + "M";
            }
        }
    }
}

