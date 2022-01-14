using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class control_buttons : MonoBehaviour
{
    public Button continueButton, againButton;
    public int stepControl;
    public new_controller playAnim; //import the function from the new_controller script to run the playAnmin script 
    

    // Start is called before the first frame update
    void Start()
    {
        continueButton.onClick.AddListener(ContinueTask);
        againButton.onClick.AddListener(AgainTask);
    }

    void ContinueTask()
    {
        stepControl = stepControl+1;
        Debug.Log(stepControl); 
        playAnim.playAnim(stepControl, true); 
        if (stepControl >= 4)
        {
            stepControl = 0; //if simulation is done start from the beginning 
        }

    }

    void AgainTask()
    {
        Debug.Log(stepControl);
        playAnim.playAnim(stepControl, false);
    }
}
