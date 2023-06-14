/*Brute force will by generating all subsets (powerSet)
time : O(2^N)
space:O(2^N)
*/









/*recurssion
time : O(2^n)*O(2^nlog2^n)
space:O(2^n)
*/

/*CODE*/



#include <bits/stdc++.h> 


void sol(int idx,int n,vector<int> & nums,vector<int>& ans ,int sum){
    if(idx==n){
        ans.push_back(sum);
        return;
    }

    sol(idx+1,n,nums,ans,sum);
    sol(idx+1, n, nums, ans, sum+nums[idx]);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> v ;
    int sum=0;
     sol(0,num.size(), num, v, sum );
     sort(v.begin(),v.end());
    
    return v ;

}