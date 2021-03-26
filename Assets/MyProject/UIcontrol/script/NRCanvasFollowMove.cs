using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class NRCanvasFollowMove : MonoBehaviour
{
    // Start is called before the first frame update
    private float time;
    void Start()
    {
        time = 0;
    }

    // Update is called once per frame
    void Update()
    {
     

        if (string.Equals(this.gameObject.name, "XMLLocationCanvas "))
        {
            if(NRKernal.NRInput.GetButton(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButton(NRKernal.ControllerButton.TRIGGER))
            {
                time += Time.deltaTime;
                if (time > 3.0f)
                {
                    gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(290.0f, 350f, 4.0f));
                    gameObject.transform.eulerAngles = Camera.main.transform.rotation.eulerAngles;
                    time = 0.0f;
                }
                
            }

            if(NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.TRIGGER))
            {
                time = 0.0f;
            }
            
        }
        else if(string.Equals(this.gameObject.name, "compass"))
        {
            
            gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(220.0f, 275f, 2.0f));
            gameObject.transform.eulerAngles = Camera.main.transform.rotation.eulerAngles;
        }
        else if(string.Equals(this.gameObject.name, "convert_text"))
        {
            gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(290.0f, 355f, 3.0f));
            gameObject.transform.eulerAngles = Camera.main.transform.rotation.eulerAngles;
        }
     

        //if (NRKernal.NRInput.GetButton(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButton(NRKernal.ControllerButton.TRIGGER))
        //{

        //}

        //if (NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.TRIGGER))
        //{
        //    time = 0.0f;
        //}
    }
}
