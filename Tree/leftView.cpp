/*using recurssion
time: O(N)
space: O(N)
*/


/*CODE*/

void sol(TreeNode<int> * root, vector<int> & ans,int level){

   if(root==NULL) return ;

   if(level == ans.size()) ans.push_back(root->data);

   sol(root->left,ans,level+1);
   sol(root->right,ans,level+1);


}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    sol(root,ans,0);

    return ans ;
    
}