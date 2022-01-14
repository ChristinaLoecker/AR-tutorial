using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SzenenManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GoToIntroduction()
    {
        SceneManager.LoadScene("Introduction");
    }

    public void GoToMountingProcess()
    {
        SceneManager.LoadScene("mounting_process");
    }

    public void GoToMainMenu()
    {
        SceneManager.LoadScene("main_menu");
    }
    public void Beenden()
    {
        Application.Quit();
    }
}
