/*Using queue 
time : O(N)
space : O(N)
*/


/*CODE*/

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    queue<BinaryTreeNode<int> *> q;
    vector<int> ans ;
    if(root==NULL) return ans;
    q.push(root);

    while(!q.empty()){
       BinaryTreeNode<int> * temp = q.front();
       q.pop();
       if(temp->left!=NULL){
           q.push(temp->left);
       }

        if(temp->right!=NULL){
           q.push(temp->right);
       }
       ans.push_back(temp->val);
    }

    return ans ;
}