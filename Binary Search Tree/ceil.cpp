/* Using iteration 
time : O(H)
space:O(1)
*/


/*CODE*/

#include <bits/stdc++.h> 

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    if(node == NULL) return -1;
    
    int ceil = -1;

    while(node){
        if(node->data == x) return x;
        
        if(node->data > x){
            ceil = node->data;
            node = node->left; 
        }
        
        else {
            node=node->right;
        }
    }

    return ceil;
}


/*Using inorder traversal we get sorted array
time: O(N)
space:O(N)
*/

/*CODE*/

void inorder(BinaryTreeNode<int> * root, vector<int> &ans){
    if(root==NULL) return;

    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.

    vector<int> ans ;
    inorder(node,ans);
    for(int i=0;i<ans.size();i++){
        if(ans[i] >= x) return ans[i];
    }
    return -1;
}