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

            
        }
    }

    void Start()
    {
        accuracy_camera = NRInput.CameraCenter;
        
    }

    

    // Update is called once per frame
    void Update()
    {
       

        if (NRInput.GetButton(ControllerButton.APP))
            {
                islotationChange = true;
            }
        accuracy_camera = NRInput.CameraCenter;
        if (islotationChange)
        {

            islotationChange = false;
            gameObject.transform.position = accuracy_camera.position + new Vector3(3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) - 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180),
                0, 3 * Mathf.Cos(accuracy_camera.eulerAngles.y * Mathf.PI / 180) + 3 * Mathf.Sin(accuracy_camera.eulerAngles.y * Mathf.PI / 180));
            gameObject.transform.eulerAngles = accuracy_camera.eulerAngles;
        }
    }

    public void SetIsLotationChange(bool check)
    {
        islotationChange = check;
    }
}
