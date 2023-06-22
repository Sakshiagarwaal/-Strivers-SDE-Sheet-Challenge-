/*using two pointer approach 
time:O(N)
space:O(1)
*/

/*CODE*/

#include <bits/stdc++.h>

int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0,j=0,ans=0,cnt0=0;
    while(j<n){
        if(arr[j]==0){
            cnt0++;
        }
        while(cnt0>k){
            if(arr[i]==0){
                cnt0--;
            }
            i++;
        }
        ans = max(ans,j-i+1);
        j++;
    }
    return ans ;
}
