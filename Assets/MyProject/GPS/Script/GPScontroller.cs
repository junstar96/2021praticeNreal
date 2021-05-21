///여기서 gps값을 계속 받아오는 것이다.


namespace NRKernal.NRExamples.MyArrowProject
{
    using System;
    using System.Collections;
    using UnityEngine;
    using UnityEngine.UI;
    using UnityEngine.Android;
    public class GPScontroller : MonoBehaviour
    {
        //
        //private Vector2 targetCoordinates;
        //private Vector2 deviceCoordinates;


        // public GameObject prefeb;

        public LocationInfo currentGPSposition;

        public double detail_num = 1.0;

        [HideInInspector]
        public bool isConnected = false;

        [HideInInspector]
        public bool isUpdated = false;

        public float lat;
        public float longi;

        public GameObject sceneChange;

        public Slider slider;
        
        private static GPScontroller m_instance;

        public static GPScontroller Instance
        {
            get
            {
                return m_instance;
            }


        }

        public bool isGPSconnected => Input.location.isEnabledByUser;

        

        private float connectTime = 3.0f;
        public LocationInfo myGPSpos
        {
            get
            {
                if (Input.location.isEnabledByUser)
                {
                    return currentGPSposition;
                }
                else
                {
                    Debug.LogWarning("location is not connecting");

                    return currentGPSposition;
                }
            }
        }

        
        /// <summary>
        /// GPS연결을 시작함.
        /// </summary>
        /// <returns></returns>
        IEnumerator Start()
        {
            Debug.Log("ienum start");

            sceneChange.SetActive(false);
            m_instance = this;

            if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                Debug.Log("permission check");
                Permission.RequestUserPermission(Permission.FineLocation);//이걸 해줘야 안드로이드에서 gps를 사용할 수 있다.

            }
            Input.location.Start(3.0f, 0);
            Input.compass.enabled = true;
            Input.gyro.enabled = true;
            StartCoroutine(SliderValue());

            yield return new WaitUntil(() => slider.value > 0.999);

            if (!Input.location.isEnabledByUser)
            {
                isConnected = false;
                Debug.Log("User has not enabled GPS");
                yield break;
            }

            isConnected = true;
            longi = Input.location.lastData.longitude;
            lat = Input.location.lastData.latitude;



            StartCoroutine(updateGPS());

        }


        /// <summary>
        /// 해당 앱이 종료되었을 때 
        /// </summary>
        private void OnApplicationQuit()
        {
            Input.location.Stop();
        }

        /// <summary>
        /// 일정 주기마다 gps를 받아오도록 설정해둔 것, 지금은 1초에 10번 주기로 받아오기로 했다.
        /// </summary>
        /// <returns></returns>
        public IEnumerator updateGPS()
        {
            float UPDATE_TIME = 0.1f;
            WaitForSeconds updateTime = new WaitForSeconds(UPDATE_TIME);

           

            while (true)
            {
                /* mapScript.Refresh();*/
                if (Input.location.isEnabledByUser == true)
                {
                    longi = Input.location.lastData.longitude;
                    lat = Input.location.lastData.latitude;
                    currentGPSposition = Input.location.lastData;


                    
                }
                if(!sceneChange.activeSelf)
                {
                    sceneChange.SetActive(true);
                }
                


                yield return updateTime;
            }
        }

        public IEnumerator SliderValue()
        {
            while(slider.value < 0.999)
            {
                slider.value += Time.deltaTime / connectTime;
                yield return null;
            }

            slider.gameObject.SetActive(false);
            sceneChange.SetActive(true);
            yield break;
        }
    }
}

