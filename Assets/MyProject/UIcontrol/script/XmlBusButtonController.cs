using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NRKernal.NRExamples.MyArrowProject;

public class XmlBusButtonController : MonoBehaviour
{
    public LocationChange button;

    public BUSstationXML test_pos;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(UntilConnecting());
    }
    IEnumerator UntilConnecting()
    {
        while (!test_pos.makefinish)
        {
            Debug.Log("not yet leading");
            yield return new WaitForSeconds(0.01f);
        }

        foreach (var entity in test_pos.XmlListForNreal)
        {
            button.adressPrint.text = entity.name;
            button.target_lati = entity.lat;
            button.target_longi = entity.lng;


            var check = Instantiate(button, gameObject.transform);

            if (!check.gameObject.activeSelf)
            {
                check.gameObject.SetActive(true);
            }
        }

        //else if(test_pos.GetComponent<BUSstationXML>() != null)
        //{
        //    int list_length = test_pos.GetComponent<BUSstationXML>().List_length;
        //    for (int i = 0; i < list_length; i++)
        //    {
        //        BUSstationXML.GPSinfo gpsinfo = test_pos.GetComponent<BUSstationXML>().ButtonInfo(i);

        //        button.adressPrint.text = gpsinfo.name;
        //        button.target_lati = gpsinfo.lati;
        //        button.target_longi = gpsinfo.longi;

        //        var check = Instantiate(button, gameObject.transform);

        //        if (!check.gameObject.activeSelf)
        //        {
        //            check.gameObject.SetActive(true);
        //        }
        //    }
        //}
        //else
        //{
        //    Debug.LogError("something connecting fail : xmlbuttoncontroller");
        //}
    }
    
}
