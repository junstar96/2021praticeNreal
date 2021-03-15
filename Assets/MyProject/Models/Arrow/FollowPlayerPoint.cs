using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace NRKernal.NRExamples
{
    public class FollowPlayerPoint : MonoBehaviour
    {
        private GameObject playerobject;
        private Vector3 derection;
        private float distance;
        //private radian 

        // Start is called before the first frame update
        void Start()
        {
            distance = Mathf.Sqrt(Mathf.Pow(0.175f, 2)+ Mathf.Pow(0.239f, 2) + Mathf.Pow(3.0f, 2));
            derection = new Vector3(0.175f, 0.239f, 3.0f);
            
            playerobject = GameObject.FindGameObjectWithTag("Player");

        }

        // Update is called once per frame
        void Update()
        {
            

            gameObject.transform.position = playerobject.transform.position + derection;
            //gameObject.transform.rotation = playerobject.transform.rotation;
        }


    }
}

