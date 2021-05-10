using UnityEngine;
using NRKernal;

public class NRCanvasFollowMove : MonoBehaviour
{
    // Start is called before the first frame update
   
    private Transform accuracy_camera;
    //private Transform accuracy_camera;

    public Canvas button_menu;
    public GameObject arrow_pivot;

    public int clicked = 0;
    public float click_time = 0.0f;
    public float click_delay = 0.5f;

    // Update is called once per frame

    void Update()
    {
        gameObject.transform.position = NRSessionManager.Instance.CenterCameraAnchor.position;
        gameObject.transform.rotation = NRSessionManager.Instance.CenterCameraAnchor.rotation;
        //accuracy_camera = NRInput.CameraCenter;
       

        if (DoubleClick())
        {
            Debug.Log("click success");
          
        }
    }

    public bool DoubleClick()
    {
        Debug.Log("double click, count : " + clicked);
        if(NRInput.GetButtonDown(ControllerButton.TRIGGER) || Input.GetKeyDown(KeyCode.Q))
        {
            clicked++;
            if(clicked==1)
            {
                click_time = Time.time;
            }
        }
        else if(clicked >= 2)
        {
            clicked = 0;
            click_time = 0.0f;
            if(!button_menu.gameObject.activeSelf)
            {
                button_menu.gameObject.SetActive(true);
            }

            return true;
        }
        else if(clicked < 2 && Time.time - click_time > click_delay)
        {
            clicked = 0;
        }

        return false;
    }

    //public void SetIsLotationChange(bool check)
    //{
    //    islotationChange = check;
    //}
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