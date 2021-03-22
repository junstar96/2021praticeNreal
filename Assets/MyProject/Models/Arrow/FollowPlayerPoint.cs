using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace NRKernal.NRExamples
{
    public class FollowPlayerPoint : MonoBehaviour
    {
        private GameObject playerobject;
        private Vector3 derection;
        //private float distance;
        //private radian 

        // Start is called before the first frame update
        void Start()
        {
            //distance = Mathf.Sqrt(Mathf.Pow(0.175f, 2)+ Mathf.Pow(0.239f, 2) + Mathf.Pow(3.0f, 2));
            derection = new Vector3(290.0f, 350f, 4.0f);
            
            
            playerobject = GameObject.FindGameObjectWithTag("Player");
            //StartCoroutine(CheckPlayerLotate());
            //StartCoroutine(CheckScreenView());
        }

        // Update is called once per frame
        void Update()
        {
            Vector3 rotationVector = Vector3.zero;


            rotationVector = Camera.main.ScreenToWorldPoint(derection);

            gameObject.transform.position = rotationVector;
            

        }

        IEnumerator CheckPlayerLotate()
        {
            while(true)
            {
                yield return new WaitForSeconds(1.0f);
                Debug.Log("player rotate"+playerobject.transform.rotation.eulerAngles);
            }
        }

        IEnumerator CheckScreenView()
        { 
            while(true)
            {
                yield return new WaitForSeconds(1.0f);
                Debug.Log("player canvas transform" + Camera.main.ScreenToWorldPoint(derection));
            }
        }

    }
}

