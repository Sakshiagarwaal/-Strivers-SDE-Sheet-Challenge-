/*Using stack
time: O(3N)
space:O(5N)
*/


/*CODE*/

#include <bits/stdc++.h> 
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> v;
    if(root == NULL) return v;

    vector<int> pre;
    vector<int> post;
    vector<int> ino;

    stack<pair<BinaryTreeNode<int>* ,int>> s;

    s.push({root,1});

    while(!s.empty()){
        auto it = s.top();
        s.pop();
        BinaryTreeNode<int> *node = it.first;
        int &x = it.second;
        if(x == 1){
            pre.push_back(node->data);
            x++;
            s.push(it);

            if(node->left){
                s.push({node->left,1});
            }
        }

           else if(x == 2){
            ino.push_back(node->data);
            x++;
            s.push(it);

            if(node->right){
                s.push({node->right,1});
            }
        }

        else {
            post.push_back(node->data);
        }
    }

  v.push_back(ino);
  v.push_back(pre);
  v.push_back(post);

  return v;

}