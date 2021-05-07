using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;
using NRKernal.NRExamples.MyArrowProject;

public class TestbadDebug : MonoBehaviour
{
    public Text debugtext;
    public bool startcheck = false;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(GPSstart());
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = NRKernal.NRSessionManager.Instance.CenterCameraAnchor.position;
        transform.rotation = NRKernal.NRSessionManager.Instance.CenterCameraAnchor.rotation;
        
        if (!startcheck)
        {
            return;
        }
        var session_y = ObjectPositionSetting.CameraDegree();
        var accuracy_gyro = Input.gyro.gravity * 30;

        float magnet_radian = (ObjectPositionSetting.MagnetDegree() - ObjectPositionSetting.CameraDegree()) % 360;


        debugtext.text = "자이로 :" + accuracy_gyro + "\n"
            + "제공마그넷 :" + Input.compass.magneticHeading + "\n"
            + "euler :" + Input.gyro.attitude.eulerAngles + "\n" 
            + "매니저 : " + session_y + "\n"
            + "마그넷 : " + magnet_radian;
    }

    public IEnumerator GPSstart()
    {
        yield return new WaitForSeconds(4.0f);

        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Debug.Log("permission check");
            Permission.RequestUserPermission(Permission.FineLocation);//이걸 해줘야 안드로이드에서 gps를 사용할 수 있다.

        }

        if(!Input.location.isEnabledByUser)
        {
            debugtext.text = Input.location.isEnabledByUser.ToString();
            yield break;
        }
        Input.location.Start(3.0f, 0);
        Input.compass.enabled = true;
        Input.gyro.enabled = true;

        startcheck = true;
    }

    public float VectorCross(Vector3 a, Vector3 b)
    {
        float c;

        c = a.x * b.x + a.y * b.y + a.z * b.z;


        return c;
    }

    public Vector3 VectorCross2(Vector3 a, Vector3 b)
    {
        Vector3 c = new Vector3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);

        return c;
    }
}
