/*Using recurssion LNR
time:O(N)
space:O(N)
*/


/*CODE*/

void helper(TreeNode* root,vector<int> &ans){
    if(root==NULL) return;

    ans.push_back(root->data);
    helper(root->left,ans);
    helper(root->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans ;
     helper(root,ans);
      return ans ;
}