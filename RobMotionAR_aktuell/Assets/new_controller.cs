using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 


public class new_controller : MonoBehaviour
{
    public Animator anim;
    public Text textWindow;


    private void Start()
    {
        textWindow.text = "please press start";
    }

    public void playAnim(int tutorialStep, bool direction)
    {
        switch (tutorialStep)
        {
            case 1:
                StartCoroutine(StepOne());
                break;
            case 2:
                if (direction)
                {
                    StartCoroutine(StepTwo()); 
                }
                else
                {
                    StartCoroutine(StepTwo()); 
                }
                break;
            case 3:
                if (direction)
                {
                    StartCoroutine(StepThree());
                }
                else
                {
                    StartCoroutine(StepThree());
                }
                break;
            case 4:
                if (direction)
                {
                    StartCoroutine(StepFour());
                }
                else
                {
                    StartCoroutine(StepFour());
                }
                break;
            default:
                anim.Play("0");
                break; 
        }
    }

    IEnumerator StepOne()
    {
        textWindow.text = "step One currently playing";
        anim.Play("Step 1");
        yield return new WaitForSeconds(6); // this is the time needed to be waited until Animation is done 
        textWindow.text = "please put lit on top";
    }

    IEnumerator StepTwo()
    {
        textWindow.text = "step Two currently playing";
        anim.SetTrigger("step2Trigger");
        yield return new WaitForSeconds(1); // this is the time needed to be waited until Animation is done 
        textWindow.text = "plase insert screw and nuts"; 
    }


    IEnumerator StepThree()
    {
        textWindow.text = "step Three currently playing";
        anim.SetTrigger("step3Trigger");
        yield return new WaitForSeconds(1); // this is the time needed to be waited until Animation is done 
        textWindow.text = "plase insert screw and nuts";
    }

    IEnumerator StepFour()
    {
        textWindow.text = "step Four currently playing";
        anim.SetTrigger("step4Trigger");
        yield return new WaitForSeconds(1); // this is the time needed to be waited until Animation is done 
        textWindow.text = "Simulation done";
    }
}
