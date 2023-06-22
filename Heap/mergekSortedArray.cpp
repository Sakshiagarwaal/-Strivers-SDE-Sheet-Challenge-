/*using min heap
time:O(nlogn)
space:O(N+M)
*/


/*CODE*/

#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>>  pq;

    for(int i=0;i<kArrays.size();i++){
        int n = kArrays[i].size();
        for(int j=0;j<n;j++){
            pq.push(kArrays[i][j]);
        }
    }
    
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans ;
}

