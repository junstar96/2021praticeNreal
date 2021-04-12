using UnityEngine;
using UnityEngine.UI;
using System;

public class Magnet_compass : MonoBehaviour
{
    private RectTransform recttransform;
    public Text post;

    // Start is called before the first frame update
    void Start()
    {
        recttransform = GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {
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
        post.text = "magnetic :" + Input.compass.magneticHeading + "\n"
           + "arlocation bool :" + Input.compass.enabled + "\n"
            + "gyro euler : " + Input.gyro.attitude.eulerAngles + "\n"
             + "gyro : " + Input.gyro.attitude + "\n"
            + "camera location :" + NRKernal.NRInput.CameraCenter.eulerAngles;


      
        



        recttransform.localEulerAngles = new Vector3(0, 0, Input.compass.magneticHeading) ;
    }
}
