/*using min heap
time: O(N*logN)
space:O(N)
*/


/*CODE*/

#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    map<int,int> mp;
    vector<int> ans;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto &it:arr){
        mp[it]++;
    }

    for(auto it:mp){
        pq.push({it.second,it.first});
        if(pq.size()>k){
            pq.pop();
        }
    }

    while(!pq.empty()){
        ans.push_back(pq.top().second);
       pq.pop();

    }

    sort(ans.begin(),ans.end());
return ans ;
}