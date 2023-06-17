/*Brute forcr mannaul 
time:O(N*N) ->worst case
space:O(1)
*/


/*Sort the array and will get inorder traversal use pre and in to construct bt and then convert to bst
time: O(N*logN)+O(N)
space: O(1)
*/



/*Most optimised
time:O(3N) ~ O(N)
space:O(1)
*/


/*CODE*/

TreeNode<int>* sol(vector<int> & v, int &i , int uB){
    if(i == v.size() || v[i]>uB) return NULL;

    TreeNode<int> * root= new TreeNode<int> (v[i++]);
    
    root->left = sol(v,i,root->data);
    root->right = sol(v,i,uB);

    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.

    int i = 0;
    return sol(preOrder,i, INT_MAX);
}