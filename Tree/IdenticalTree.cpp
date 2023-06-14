/*time:O(n)
space:O(n)
*/


/*CODE*/


#include <bits/stdc++.h> 
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 
   if(root1 ==  NULL && root2 == NULL) return true ;
   if(root1 == NULL || root2==NULL) return false ;
   if(root1->data != root2->data) return false ;

   return identicalTrees(root1->left,root2->left) && identicalTrees(root1->right,root2->right);


}