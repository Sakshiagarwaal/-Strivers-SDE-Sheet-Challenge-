/*using inorder traversal
time: O(n)
space:O(n)
*/

/*CODE*/


#include <bits/stdc++.h> 
void sol(vector<int> & ans, TreeNode<int> *root){
    if(root==NULL) return ;

    sol(ans, root->left);
    ans.push_back(root->data);
    sol(ans,root->right);
}

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    vector<int> ans ;
    sol(ans,root);
    reverse(ans.begin(),ans.end());
    if(ans.size()<k) return-1;
  return ans[k-1];
}