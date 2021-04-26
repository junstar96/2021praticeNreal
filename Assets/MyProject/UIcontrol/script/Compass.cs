using UnityEngine;
using UnityEngine.UI;
using System;
using NRKernal.NRExamples.MyArrowProject;

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

        float gyro_degree = Input.gyro.attitude.z < 0 ? 180 - Input.gyro.attitude.w * 180 : Input.gyro.attitude.w * 180 + 180;
//        if (!Scenemanager.instance.)
//        {
//            post.text = "북쪽을 바라봐 주세요." + "\n"
//                + "gps connect : " + Input.location.isEnabledByUser + "\n"
//                + "gyro y degree : " + gyro_degree + "\n"
//                + "magnetic degree : " + Input.compass.magneticHeading + "\n"
//                + "camera rotation : " + NRKernal.NRInput.CameraCenter.eulerAngles.y + "\n"
//                + "gps connected : " + GPScontroller.Instance.isGPSconnected;
//        }
//        else
//        {
//#if !UNITY_EDITOR
//            post.text = "magnetic :" + Input.compass.magneticHeading + "\n"
//         + "arlocation bool :" + Input.compass.enabled + "\n"
//          + "gyro euler : " + Input.gyro.attitude.eulerAngles + "\n"
//           + "gyro : " + Input.gyro.attitude + "\n"
//          + "camera location :" + NRKernal.NRInput.CameraCenter.eulerAngles + "\n"
//          + "current_gps : (" + Input.location.lastData.latitude + "," + Input.location.lastData.longitude + ")";
//#else
//            post.text = "camera location :" + NRKernal.NRInput.CameraCenter.eulerAngles + "\n"
//                + "current_gps : (" + Input.location.lastData.latitude + "," + Input.location.lastData.longitude + ")";
//#endif
//        }
//        //- cameraCorrection;








        recttransform.localEulerAngles = new Vector3(0, 0, gyro_degree);
    }
}