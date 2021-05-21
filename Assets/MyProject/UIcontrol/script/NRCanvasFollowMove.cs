using UnityEngine;
using NRKernal;


/// <summary>
/// 스마트폰 화면을 더블클릭해서 ui 창을 내 눈 앞에 띄우도록 하는 것.
/// </summary>
public class NRCanvasFollowMove : MonoBehaviour
{
    // Start is called before the first frame update
   
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


