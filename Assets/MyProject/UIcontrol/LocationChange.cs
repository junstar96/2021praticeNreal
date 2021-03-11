using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal.NRExamples;

public class LocationChange : MonoBehaviour
{
    // Start is called before the first frame update

    public UnityEngine.Events.UnityEvent changelocation;
    public Text adressPrint;

    public string nameOfStation;
    public double targetlati;
    public double targetlongi;

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
