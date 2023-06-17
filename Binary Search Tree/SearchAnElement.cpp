/*using recursion
time:O(H)
space:O(H)


height in bst logN base 2
*/

/*CODE*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root == NULL){
        return false ;
    }
   else  if(root->data == x){
        return true ;
    }

   else  if(root->data>=x){
      searchInBST(root->left,x);
    }

    else {
     searchInBST(root->right,x);
    }   
}



/*Using iteration we can avoid extra space need i.e, space: O(1)*/


/*CODE*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root==NULL) return false;

    while(root!=NULL){
        if(root->data == x) return true;

         if(root->data>=x){
            root=root->left;
        }

        else root=root->right;
    }

    return false ;
}

/*short code for iteration*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.

    while(root!=NULL && root->data != x){
        root= x< root->data ? root->left:root->right;
    }
    return root;
}