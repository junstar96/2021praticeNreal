using UnityEngine;
using UnityEngine.UI;
using System;

public class Magnet_compass : MonoBehaviour
{
    private bool isFixingCanvas;
    private RectTransform recttransform;
    public Text post;

    public float last_correction_magnetic;
    public float current_correction_magnetic;

    // Start is called before the first frame update
    void Start()
    {
      
        current_correction_magnetic = 0;
        recttransform = GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {
        isFixingCanvas = false;
       

        //float cameraCorrection = 0.0f;

        //if(Camera.main.transform.rotation.eulerAngles.y < 0)
        //{
        //    cameraCorrection = 180 - Camera.main.transform.rotation.eulerAngles.y;
        //}
        //else
        //{
        //    cameraCorrection = Camera.main.transform.rotation.eulerAngles.y;
        //}
        //float magnetCorrection = (float)ARLocation.ARLocationProvider.Instance.CurrentHeading.magneticHeading;

        //- cameraCorrection;


        current_correction_magnetic = (float)ARLocation.ARLocationProvider.Instance.CurrentHeading.magneticHeading;

      
       

        

        post.text = "location : " + Scenemanager.instance.nrglassrotation.eulerAngles.ToString("F3") + "\n"
            + "magnetic :" + ARLocation.ARLocationProvider.Instance.CurrentHeading.magneticHeading + "\n"
            + "correction magnetic :" + current_correction_magnetic;

#if UNITY_EDITOR
        if (string.Equals(Scenemanager.instance.scenename, "Logo scene"))
        {
            if (current_correction_magnetic < 0.2f&&current_correction_magnetic>-0.2f
                &&ARLocation.ARLocationProvider.Instance.CurrentHeading.isMagneticHeadingAvailable && !isFixingCanvas)
            {
                isFixingCanvas = true;

                if (!Scenemanager.instance.loadingScene.activeSelf)
                {
                    Scenemanager.instance.loadingScene.SetActive(true);
                    Scenemanager.instance.loadingScene.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(290.0f, 350f, 4.0f));
                    Scenemanager.instance.loadingScene.transform.rotation = Camera.main.transform.rotation;
                }
            }
        }
#else
        if (ARLocation.ARLocationProvider.Instance.CurrentHeading.isMagneticHeadingAvailable && !isFixingCanvas)
        {
                isFixingCanvas = true;

                if (!Scenemanager.instance.loadingScene.activeSelf)
                {
                    Scenemanager.instance.loadingScene.SetActive(true);
                    Scenemanager.instance.loadingScene.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(290.0f, 350f, 4.0f));
                    Scenemanager.instance.loadingScene.transform.rotation = Camera.main.transform.rotation;
                }
        }
#endif
        //카메라는 z축으로 회전하며 gps 정보에 영향을 줄 수 있는 값은 y값이다.


        recttransform.localEulerAngles = new Vector3(0, 0, current_correction_magnetic);
    }
}
