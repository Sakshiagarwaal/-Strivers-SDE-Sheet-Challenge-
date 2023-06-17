/*recursion uses extra space can do iteratively for no space complexity
time: O(H)
space:O(1) recursive stack space will be taken 
*/

/*CODE*/


#include <bits/stdc++.h> 
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root == NULL) return NULL;

    TreeNode<int> * temp = root;
    if(temp->data >P->data && temp->data >Q->data){
      return   LCAinaBST(root->left, P, Q);
    }

     if(temp->data < P->data && temp->data < Q->data){
       return  LCAinaBST(root->right, P, Q);
    }


    return root;
}


/*Iterative Code*/


TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root == NULL) return NULL;

    TreeNode<int> * temp = root;
    while(temp){
  if(temp->data >P->data && temp->data >Q->data){
         temp = temp->left;
    }

     else  if(temp->data < P->data && temp->data < Q->data){
       temp = temp->right;
    }

    else return temp;

    }

    return NULL;
}