/*time:O(N log N) + O(N*M).
space:O(M) 
*/

/*CODE*/
#include <bits/stdc++.h> 

bool comp(vector<int> a,vector<int>b){
     return a[1]>b[1];
}

int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n = jobs.size(),maxDead = INT_MIN;

    for(int i=0;i<n;i++){
        maxDead = max(maxDead,jobs[i][0]);
    }

    sort(jobs.begin(),jobs.end(),comp);
    int profit =0;
    vector<int> ans(maxDead+1,-1);

    for(int i=0;i<n;i++){
        int curDead = jobs[i][0];
        int CurProfit = jobs[i][1];
        for(int k = curDead;k>0;k--){
            if(ans[k]==-1){
                profit += CurProfit;
                ans[k]=1;
                break;
            }
        }

    }

    return profit ;
}
