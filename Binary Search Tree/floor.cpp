/*Using iteration
time: O(H)
space:O(1)
*/

/*CODE*/

#include <bits/stdc++.h> 
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.

    int ans = -1;
    while(root){
        if(root->val == X){
             return root->val;
        }

        if(root->val >X){
            root= root->left;
        }

        else{
            ans = root->val;
            root = root->right;
        }
    }
    return ans ;
}


/*Using inorder traversal
time: O(N)
space: O(N)
*/


/*CODE*/



void sol(TreeNode<int> * root,vector<int> & ans){
    if(root== NULL){
        return  ;
    }

     sol(root->left,ans);
     ans.push_back(root->val);
     sol(root->right,ans);
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    vector<int> ans;
    sol(root,ans);
     reverse (ans.begin(),ans.end());

     for(int i=0;i<ans.size();i++){
         if(ans[i]<= X){
             return ans[i];
         }
     }
}
