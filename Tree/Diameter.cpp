/*using height function ans postorder traversal
time: O(N)
space:O(N)
*/

/*CODE*/


#include <bits/stdc++.h> 
int sol(TreeNode<int> *root, int & maxH){
    if(root== NULL) return 0;

    int ans1 = sol(root->left,maxH);
    int ans2 = sol(root->right, maxH);

    maxH = max(maxH, ans1+ans2);

    return 1+ max(ans1,ans2);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int maxD = 0;

 sol(root,maxD);

    return maxD;

}