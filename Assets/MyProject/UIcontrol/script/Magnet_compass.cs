using UnityEngine;
using UnityEngine.UI;
using System;

public class Magnet_compass : MonoBehaviour
{
    private float time;
    private RectTransform recttransform;
    public Text post;

    // Start is called before the first frame update
    void Start()
    {
        time = 0.0f;
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


      
        time += Time.deltaTime;
        if (time > 1.0f)
        {
            Debug.Log("gyro euler : (" + Input.gyro.attitude.eulerAngles.x + "," + Input.gyro.attitude.eulerAngles.y + "," +Input.gyro.attitude.eulerAngles.z + ")");
            Debug.Log("gyro attitude : (" + Input.gyro.attitude.x + "," + Input.gyro.attitude.y + "," + Input.gyro.attitude.z + "," + Input.gyro.attitude.w + ")");
            Debug.Log("magnetic value : " + Input.compass.magneticHeading);
            time = 0.0f;
        }



        recttransform.localEulerAngles = new Vector3(0, 0, Input.compass.magneticHeading) ;
    }
}
