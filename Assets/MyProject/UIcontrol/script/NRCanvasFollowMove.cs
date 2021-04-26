using UnityEngine;
using NRKernal;

public class NRCanvasFollowMove : MonoBehaviour
{
    // Start is called before the first frame update
   
    public bool islotationChange = false;
   //private Transform accuracy_camera;

    

    // Update is called once per frame
    void Update()
    {
        if (NRInput.GetButtonDown(ControllerButton.APP) || NRInput.GetButtonDown(ControllerButton.TRIGGER))
        {
            if(gameObject.name == "compass" &&NRKernal.NRExamples.MyArrowProject.Scenemanager.Instance.scenename == "Logo scene")
            {
                Debug.Log("press");
                gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled = !gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled;
                return;
            }
            else if(gameObject.name == "XMLLocationCanvas ")
            {
                Debug.Log("Main scene press");
                gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled = !gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled;
                return;
            }


        }
        //accuracy_camera = NRInput.CameraCenter;
        //if (islotationChange)
        //{

        //    islotationChange = false;
        //    gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
        //        0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
        //    gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
        //}
    }

    public void SetIsLotationChange(bool check)
    {
        islotationChange = check;
    }
}
