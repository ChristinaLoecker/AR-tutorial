using UnityEngine;

public class ROS_anim : MonoBehaviour
{
    //variable for the animations
    public Animator anim;

    // variable that later gets the animation triggered
    public string i;
        
    // get the script 'loaded' in which the variable can be found thats used
    // in void update()
    public RosSharp.RosBridgeClient.PoseStampedSubscriber subscriber;
    // Note: The game object RosConnector has to be draged from the hierarchy
    // into the field "subsciber" of the ROS_anim component to make this work


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // save the z axis value of "position" in "i" and convert it into a
        // string
        i = subscriber.position.z.ToString();

        // play the animation called like the z axis value of the variable
        // "position" from the script "PoseStampedSubscriber"
        anim.Play(i);



        // alternative method:
        // is the value "1" sent (as the z axis value of position, found in the
        // script PoseStampedSubscriber)? If yes, play animation "1"

        /*
        
        if (subscriber.position.z == 0)
        {
            anim.Play("0");
        }

        if (subscriber.position.z == 1)
        {
            anim.Play("1");
        }

        ...

        */
    }
}
