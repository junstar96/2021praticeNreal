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
        if(NRKernal.NRInput.GetButton(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButton(NRKernal.ControllerButton.TRIGGER))
        {
            time += Time.deltaTime;

            if(time > 3.0f)
            {
                gameObject.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(290.0f, 350f, 4.0f));
            }
        }

        if (NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.APP) || NRKernal.NRInput.GetButtonUp(NRKernal.ControllerButton.TRIGGER))
        {
            time = 0.0f;
        }
    }
}
