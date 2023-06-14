/*recusrsion 
tiem: O(N)
space: O(N)
*/


/*CODE*/

#include <bits/stdc++.h> 

bool sol(TreeNode * root, vector<int> & ans,int x){

    if(root==NULL) return ;

    ans.push_back(root->data);

    if(root->data == x){
        return;
    }

    return sol(root->left,ans,x) || sol(root->right,ans,x);

    ans.pop_back(root->data);
    return false ;
   
}