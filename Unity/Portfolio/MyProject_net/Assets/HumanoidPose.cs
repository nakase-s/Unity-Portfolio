using UnityEngine;

public class HumanoidPose : StateMachineBehaviour
{
    // OnStateEnter is called when a transition starts
    override public void OnStateEnter(Animator animator, 
            AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.gameObject.GetComponent<Rigidbody>()
            .AddForce(Vector3.up * 50, ForceMode.VelocityChange);
    }

    // OnStateExit is called when a transition ends
    override public void OnStateExit(Animator animator, 
            AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.SetBool("jump", false);
    }
}
