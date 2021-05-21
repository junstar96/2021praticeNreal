using UnityEngine;
using UnityEngine.UI;
using NRKernal.NRExamples.MyArrowProject;

public class SceneChanger : MonoBehaviour
{
    private Button sceneChangeButton;
    private bool buttonclick = false;

    private void OnEnable()
    {
        buttonclick = false;
    }
    private void Start()
    {
        sceneChangeButton = GetComponent<Button>();
       
        sceneChangeButton.onClick.AddListener(LocalChangeScene);
    }
    // Start is called before the first frame update

    public void LocalChangeScene()
    {
        if(!buttonclick)
        {
            Scenemanager.Instance.ChangeScene("SelectManu");
            buttonclick = true;
        }
        
    }

}
