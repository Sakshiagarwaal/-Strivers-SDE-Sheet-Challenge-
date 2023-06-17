/*do inoreder traversal
time:
space:
*/


/*CODE*/




/*recursion
time:
space:
*/



/*CODE*/

bool sol(BinaryTreeNode<int> * root,long long minVal, long long maxVal){
    if(root==NULL) return true;
    if(root->data < minVal || root->data > maxVal) return false;

    return sol(root->left,minVal,root->data) && sol(root->right,root->data, maxVal);
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return sol(root,LONG_MIN,LONG_MAX);
}