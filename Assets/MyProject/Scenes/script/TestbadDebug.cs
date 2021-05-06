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


        float magnet_radian = (ObjectPositionSetting.GyroDegree() - ObjectPositionSetting.CameraDegree()) % 360;
        debugtext.text = Input.location.lastData.latitude + "\n"
            + Input.location.lastData.longitude + "\n"
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
}
