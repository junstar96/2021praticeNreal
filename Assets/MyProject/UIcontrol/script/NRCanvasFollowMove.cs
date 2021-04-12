using UnityEngine;
using NRKernal;

public class NRCanvasFollowMove : MonoBehaviour
{
    // Start is called before the first frame update
   
    public bool islotationChange = false;
    private Transform accuracy_camera;

    private void OnEnable()
    {
        if (string.Equals(this.gameObject.name, "XMLLocationCanvas"))
        {
            if (islotationChange)
            {

                islotationChange = false;
                gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
                    0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
                gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
            }

            if (NRInput.GetButton(ControllerButton.APP))
            {
                islotationChange = true;
            }
        }
    }

    void Start()
    {
        accuracy_camera = NRInput.CameraCenter;
        
    }

    

    // Update is called once per frame
    void Update()
    {
        accuracy_camera = NRInput.CameraCenter;
        if (string.Equals(this.gameObject.name, "XMLLocationCanvas"))
        {
            if(islotationChange)
            {
               
                islotationChange = false;
                gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) -3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI/180),
                    0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3*Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
                gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
            }

            if (NRInput.GetButton(ControllerButton.APP))
            {
                islotationChange = true;
            }
        }
        else if (string.Equals(this.gameObject.name, "compass"))
        {
            gameObject.transform.position = accuracy_camera.position + new Vector3(/*3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180)*/ - 3 * Mathf.Sin(-accuracy_camera.eulerAngles.y * Mathf.PI / 180),
                    0, 3 * Mathf.Cos(-accuracy_camera.eulerAngles.y * Mathf.PI / 180)/* + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180)*/);
            gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;

        }
        else if (string.Equals(this.gameObject.name, "SceneChange"))
        {
            gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
                   0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
            gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
        }
        else if (string.Equals(this.gameObject.name, "BusLocationCanvas"))
        {
            gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
                    0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
            gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
        }
       
     

        //if (NRKernal.NRInput.GetButton(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButton(NRKernal.ControllerButton.TRIGGER))
        //{

        //}

        //if (NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.TRIGGER))
        //{
        //    time = 0.0f;
        //}
    }

    public void SetIsLotationChange(bool check)
    {
        islotationChange = check;
    }
}
