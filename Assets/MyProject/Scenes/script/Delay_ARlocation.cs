//test

namespace ARLocation
{
    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;

    public class Delay_ARlocation : MonoBehaviour
    {
        public GameObject webmaploader;
        private void Awake()
        {
            webmaploader.SetActive(false);
            StartCoroutine(Delay_Test_NR());
        }

        // Update is called once per frame
        void Update()
        {

        }

        private IEnumerator Delay_Test_NR()
        {
            yield return new WaitForSeconds(2.0f);
            Debug.Log("hello world");
            webmaploader.SetActive(true);
        }
    }
}
