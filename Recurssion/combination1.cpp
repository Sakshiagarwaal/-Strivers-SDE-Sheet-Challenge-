/*recurssion
time:O(2^n)
space:O(2^n*n)
*/



/*CODE*/

#include <bits/stdc++.h>


void sol(int idx, int n, int target, vector<int> &num, vector<vector<int>> &ans, vector<int> &v){
if(idx == n){
    if(target ==0){
        ans.push_back(v);
    }
    return;
}

v.push_back(num[idx]);
sol(idx+1,n,target-num[idx],num,ans,v);
v.pop_back();
sol(idx+1,n,target, num, ans ,v);

}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans ;
    vector<int> v;
    sol(0,n,k,arr,ans,v);

    return ans ;
}