/*Iterative method
time:O(N)
space:O(N)
*/


/*CODE*/

#include <bits/stdc++.h> 

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.

    vector<int> ans ;
    if(root==NULL) return ans ;

    queue<pair<BinaryTreeNode<int>*,int>> q;
    map<int,int> mp;
    
    q.push({root,0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();
        BinaryTreeNode<int>* node = it.first;
        int dist =  it.second;
        
        mp[dist] = node->data;
        
        if(node->left){
            q.push({node->left,dist-1});
        }

         if(node->right){
            q.push({node->right,dist+1});
        }
    }

    for(auto &it:mp){
        ans.push_back(it.second);
        
    }


    return ans ;