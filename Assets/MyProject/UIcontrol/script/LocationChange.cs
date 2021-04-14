using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace NRKernal.NRExamples
{
    namespace MyArrowProject
    {
        public class LocationChange : MonoBehaviour
        {
            // Start is called before the first frame update

            


            public MygpsTrans myGpsTrans;

            //public UnityEngine.Events.UnityEvent changelocation;
            public Text adressPrint;
            public double target_lati;
            public double target_longi;
            public Transform target_transform;
            private Button yourButton;
            

            private void Awake()
            {

                myGpsTrans = GameObject.FindWithTag("Arrow").GetComponent<ArrowController>();

                yourButton = GetComponent<Button>();
                //Debug.Log("count : " + count);
            }

            private void OnEnable()
            {
                yourButton.onClick.AddListener(ChangeTargetGPS);
                Debug.Log("text name : " + adressPrint.text);
            }


            public void ChangeTargetGPS()
            {
                Debug.Log("change target : " + adressPrint.text);
                myGpsTrans.GetLocation(adressPrint.text, target_lati, target_longi);
                myGpsTrans.GetTargetObject(target_transform.position);

            }

            public void ChangeScene(string name)
            {
                Scenemanager.instance.ChangeScene(name);
            }
        }
    }
}


