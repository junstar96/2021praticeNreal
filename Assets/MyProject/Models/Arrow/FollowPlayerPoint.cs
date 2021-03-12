using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace NRKernal.NRExamples
{
    public class FollowPlayerPoint : MonoBehaviour
    {
        private GameObject playerobject;

        // Start is called before the first frame update
        void Start()
        {
            playerobject = GameObject.FindGameObjectWithTag("Player");

            if (playerobject == null)
            {
                Debug.Log("player connect fail");

            }
            else
            {
                Debug.Log("player connect success");
            }

        }

        // Update is called once per frame
        void Update()
        {

            gameObject.transform.position = playerobject.transform.position + new Vector3(0.175f, 0.239f, 3.0f);
            //gameObject.transform.rotation = playerobject.transform.rotation;
        }


    }
}

