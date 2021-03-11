using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using NRKernal.NRExamples;

public class LocationChange : MonoBehaviour
{
    // Start is called before the first frame update

    public BUSstationXML xml_pos;
    public Text adressPrint;

    public string nameOfStation;

    private void OnEnable()
    {
        adressPrint.text = nameOfStation;
    }

    private void Start()
    {
      
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnMouseDown()
    {
        Debug.Log("button click");
        Destroy(gameObject);
  
    }
}
