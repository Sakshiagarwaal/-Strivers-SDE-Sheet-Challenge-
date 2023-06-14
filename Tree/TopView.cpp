/*Iterative way using level order traversal
time: O(N)
space:O(N)
*/

/*CODE*/

#include <bits/stdc++.h> 
vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.

vector<int> ans ;
 if(root==NULL) return ans ;

 queue<pair<TreeNode<int> *,int>> q;
 map<int,int> mp;

 q.push({root,0});

 while(!q.empty()){
     auto it= q.front();
     q.pop();
     TreeNode<int> * node= it.first;
     int dist = it.second;

     if(mp.find(dist) == mp.end()){
         mp[dist] = node->val;
     }
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
    
}