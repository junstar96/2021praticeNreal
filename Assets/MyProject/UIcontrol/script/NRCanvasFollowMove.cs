using UnityEngine;
using NRKernal;

public class NRCanvasFollowMove : MonoBehaviour
{
    // Start is called before the first frame update
   
    public bool islotationChange = false;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        if (string.Equals(this.gameObject.name, "XMLLocationCanvas"))
        {
            if(islotationChange)
            {
                islotationChange = false;
                gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(290.0f, 350f, 4.0f));
                gameObject.transform.eulerAngles = Camera.main.transform.rotation.eulerAngles;
            }

            if (NRInput.GetButton(ControllerButton.APP))
            {
                islotationChange = true;
            }
        }
        else if (string.Equals(this.gameObject.name, "compass"))
        {
#if UNITY_EDITOR
            gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(220.0f, 360f, 4.5f));
            gameObject.transform.rotation = Camera.main.transform.rotation;
#else
            gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(90.0f, 300f, 3.0f));
            gameObject.transform.eulerAngles = Camera.main.transform.rotation.eulerAngles;
#endif
        }
        else if (string.Equals(this.gameObject.name, "SceneChange"))
        {
            gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(220.0f, 300f, 6.0f));
            gameObject.transform.rotation = Camera.main.transform.rotation;
        }
        else if (string.Equals(this.gameObject.name, "BusLocationCanvas"))
        {
            gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(220.0f, 300f, 4.5f));
            gameObject.transform.rotation = Camera.main.transform.rotation;
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
