using UnityEngine;
using UnityEngine.UI;
using System;
using NRKernal.NRExamples.MyArrowProject;

public class Level_View : MonoBehaviour
{
    private RectTransform recttransform;
    

    public GameObject level_view_ball;

    private Vector3 defaultvector;
    public Text post;

    // Start is called before the first frame update
    void Start()
    {
        recttransform = GetComponent<RectTransform>();
        defaultvector = level_view_ball.transform.position;
    }

    // Update is called once per frame
    void Update()
    {

        var speed = Input.acceleration * 10 * Time.deltaTime;



        level_view_ball.transform.Translate(speed);
      




        float gyro_degree = Input.gyro.attitude.z < 0 ? 180 - Input.gyro.attitude.w * 180 : Input.gyro.attitude.w * 180 + 180;


        post.text = "넣어주세요" + "\n"
            +"gyro euler : " + Input.gyro.attitude.eulerAngles + "\n"
           + "gyro : " + Input.gyro.attitude + "\n"
           + "accelation : " + Input.acceleration + "\n"
          + "current_gps : (" + Input.location.lastData.latitude + "," + Input.location.lastData.longitude + ")";
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
