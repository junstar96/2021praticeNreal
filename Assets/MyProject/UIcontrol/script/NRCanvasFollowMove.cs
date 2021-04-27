using UnityEngine;
using NRKernal;

public class NRCanvasFollowMove : MonoBehaviour
{
    // Start is called before the first frame update
   
    public bool islotationChange = false;
    private Transform accuracy_camera;
    //private Transform accuracy_camera;

    public int click_count = 0;

    // Update is called once per frame

    void Update()
    {
        if(NRInput.GetButtonDown(ControllerButton.APP) || NRInput.GetButtonDown(ControllerButton.TRIGGER))
        {
            islotationChange = true;
        }


        if(!islotationChange)
        {
            return;
        }

        islotationChange = false;
        accuracy_camera = NRInput.CameraCenter;

        Vector3 lotationvector = new Vector3(3.0f * Mathf.Sin(Mathf.Deg2Rad * accuracy_camera.eulerAngles.y), 0, 3.0f * Mathf.Cos(Mathf.Deg2Rad * accuracy_camera.eulerAngles.y));


        Debug.Log("accuracy parent forward : " + accuracy_camera.parent.forward);
        gameObject.transform.position = accuracy_camera.transform.position + lotationvector;
        gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
        
        //if (NRInput.GetButtonDown(ControllerButton.APP)||NRInput.GetButtonDown(ControllerButton.TRIGGER))
        //{
        //    click_count++;
           
        //    if (!IsInvoking("DoubleClick"))
        //    {
        //        Invoke("DoubleClick", 1.0f);
        //    }
        //}
        //else if(click_count >=2)
        //{
        //    CancelInvoke("DoubleClick");
        //    click_count = 0;

           
        //}
        


    

        //if (NRInput.GetButtonDown(ControllerButton.APP) || NRInput.GetButtonDown(ControllerButton.TRIGGER))
        //{
        //    click_count++;

        //    if(!IsInvoking("DoubleClick"))
        //    {
        //        Invoke("DoubleClick", 1.0f);
        //    }
           

            


        //}
        //else if(click_count >= 2)
        //{
        //    CancelInvoke("DoubleClick");
        //    click_count = 0;
        //    if (gameObject.name == "compass" && NRKernal.NRExamples.MyArrowProject.Scenemanager.Instance.scenename == "Logo scene")
        //    {
        //        Debug.Log("press");
        //        gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled = !gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled;
        //        return;
        //    }
        //    else if (gameObject.name == "XMLLocationCanvas ")
        //    {
        //        Debug.Log("Main scene press");
        //        gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled = !gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled;
        //        return;
        //    }
        //    else if(gameObject.name == "arrowPivot")
        //    {
        //        Debug.Log("arrow press");
        //        gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled = !gameObject.GetComponent<NRKernal.NRExamples.CameraSmoothFollow>().enabled;
        //        return;
        //    }
        //}
        //accuracy_camera = NRInput.CameraCenter;
        //if (islotationChange)
        //{

        //    islotationChange = false;
        //    gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
        //        0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
        //    gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
        //}
    }

    public void DoubleClick()
    {
        click_count = 0;
    }

    public void SetIsLotationChange(bool check)
    {
        islotationChange = check;
    }
}

//public class NRCanvasFollowMove : MonoBehaviour
//{
//    // Start is called before the first frame update

//    public bool islotationChange = false;
//    private Transform accuracy_camera;

//    private void OnEnable()
//    {
//        if (string.Equals(this.gameObject.name, "XMLLocationCanvas"))
//        {
//            if (islotationChange)
//            {

//                islotationChange = false;
//                gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
//                    0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
//                gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
//            }


//        }
//    }

//    void Start()
//    {
//        accuracy_camera = NRInput.CameraCenter;

//    }



//    // Update is called once per frame
//    void Update()
//    {


//        if (NRInput.GetButton(ControllerButton.APP))
//        {
//            islotationChange = true;
//        }
//        accuracy_camera = NRInput.CameraCenter;
//        if (islotationChange)
//        {

//            islotationChange = false;
//            gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
//                0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
//            gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
//        }
//    }

//    public void SetIsLotationChange(bool check)
//    {
//        islotationChange = check;
//    }
//}