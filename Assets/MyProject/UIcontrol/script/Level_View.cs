using UnityEngine;
using UnityEngine.UI;
using System;
using NRKernal.NRExamples.MyArrowProject;

public class Level_View : MonoBehaviour
{
    private RectTransform recttransform;
    

    public Image level_view_ball;

    private Vector3 defaultvector;
    public Text post;

    // Start is called before the first frame update
    void Start()
    {
        recttransform = GetComponent<RectTransform>();
        defaultvector = recttransform.localPosition;
    }
    // Update is called once per frame
    void Update()
    {
        var level_accuracy = Input.gyro.gravity * 50;


        recttransform.localPosition = defaultvector + level_accuracy;


        float gyro_degree = Input.gyro.attitude.z < 0 ? 180 - Input.gyro.attitude.w * 180 : Input.gyro.attitude.w * 180 + 180;


        post.text = "넣어주세요" + "\n"
            + "gyro euler : " + Input.gyro.attitude.eulerAngles + "\n"
           + "gyro : " + Input.gyro.attitude;
        //        if (!Scenemanager.instance.isFixingCanvas)
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
        //           
        //#else
        //            post.text = "camera location :" + NRKernal.NRInput.CameraCenter.eulerAngles + "\n"
        //                + "current_gps : (" + Input.location.lastData.latitude + "," + Input.location.lastData.longitude + ")";
        //#endif
        //        }
        //- cameraCorrection;








        recttransform.localEulerAngles = new Vector3(0, 0, gyro_degree) ;
    }
}
