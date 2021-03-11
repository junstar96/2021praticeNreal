using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal.NRExamples;

public class ButtonController : MonoBehaviour
{
    // Start is called before the first frame update

    public BUSstationXML xml_pos;
    public LocationChange button;

    void Start()
    {
        for(int i = 0;i<xml_pos.List_length;i++)
        {
            Debug.Log("화면에 버튼을 띄우는 중이다");
            BUSstationXML.GPSinfo buttoninfo;
            buttoninfo = xml_pos.ButtonInfo(i);
            button.nameOfStation = buttoninfo.name;
            Instantiate(button, gameObject.transform);
        }


    }

    // Update is called once per frame
    //void Update()
    //{
        
    //}
}
