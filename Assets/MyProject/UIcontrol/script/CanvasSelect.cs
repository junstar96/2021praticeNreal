using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal;

public class CanvasSelect : MonoBehaviour
{
    public Canvas targetCanvas;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(NRInput.GetButtonDown(ControllerButton.TRIGGER))
        {
            targetCanvas.gameObject.SetActive(true);
        }
    }
}
