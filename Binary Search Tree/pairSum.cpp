/* inorder and map
time:O(N)
space:O(N)*/


/*CODE*/


void sol(vector<int> & ans, BinaryTreeNode<int> *root){
    if(root==NULL) return ;

    sol(ans, root->left);
    ans.push_back(root->data);
    sol(ans,root->right);

}

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
     vector<int> ans ;
    sol(ans,root);

    int i=0,j= ans.size()-1;
    while(i<=j){
        int sum = ans[i]+ans[j];
        if(sum == k){
             return true;
        }
        
        if(sum> k){
            j--;
        }
        else i++;
    }

    return false;
}