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
        textWindow.text = "Bitte drücke Start!";
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
        textWindow.text = "Schritt 1 wird abgespielt";
        anim.Play("Step 1");
        yield return new WaitForSeconds(6); // this is the time needed to be waited until Animation is done 
        textWindow.text = "Bitte den Deckel aufsetzen!";
    }

    IEnumerator StepTwo()
    {
        textWindow.text = "Schritt 2 wird abgespielt";
        anim.SetTrigger("step2Trigger");
        yield return new WaitForSeconds(2); // this is the time needed to be waited until Animation is done 
        textWindow.text = "Bitte Schrauben und Muttern einsetzen!"; 
    }


    IEnumerator StepThree()
    {
        textWindow.text = "Schritt 3 wird abgespielt";
        anim.SetTrigger("step3Trigger");
        yield return new WaitForSeconds(3); // this is the time needed to be waited until Animation is done 
        textWindow.text = "Bitte Schrauben und Muttern einsetzen!";
    }

    IEnumerator StepFour()
    {
        textWindow.text = "Schritt 4 wird abgespielt";
        anim.SetTrigger("step4Trigger");
        yield return new WaitForSeconds(2); // this is the time needed to be waited until Animation is done 
        textWindow.text = "Herzlichen Glückwunsch! Du hast das Tutorial bestanden!";
    }
}
