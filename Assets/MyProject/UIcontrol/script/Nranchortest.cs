using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace NRKernal
{
    public class Nranchortest : MonoBehaviour
    {
        public NRTrackable hello;

        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            hello.CreateAnchor();
        }
    }
}
