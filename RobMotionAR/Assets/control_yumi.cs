using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class control_yumi : MonoBehaviour
{
    public Button continueButton, backButton;
    public int stepControl = 0;
    public new_controller new_control;

    // Start is called before the first frame update
    void Start()
    {
        //íf one button is clicked the corresponding void is executed 
        continueButton.onClick.AddListener(TaskOnClick1);
        backButton.onClick.AddListener(TaskOnClick2);
        //new_control.playAnim(stepControl);
    }

    void TaskOnClick1()
    {
        // progess one step
        stepControl = stepControl + 1;
        Debug.Log(stepControl);
    }

    void TaskOnClick2()
    {
        Debug.Log(stepControl);
    }
}
