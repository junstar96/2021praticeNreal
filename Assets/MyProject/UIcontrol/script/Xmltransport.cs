using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Xmltransport : MonoBehaviour
{
    public ARLocation.WebMapLoader webmaploader;
    private Button button;
    public TextAsset XmlDataFile;

    // Start is called before the first frame update

    private void Awake()
    {
        button = GetComponent<Button>();
        button.onClick.AddListener(TextUpdate);
    }
    void Start()
    {
        

    }

    // Update is called once per frame
    
    public void TextUpdate()
    {
        webmaploader.XmlDataFile = XmlDataFile;
    }
}
