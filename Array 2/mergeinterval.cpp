/*Using sorting and two times traversal
time: O(NlogN)+O(2N)
space:O(N)
*/

/*CODE*/



#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &nums)
{
    // Write your code here.
    int n= nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        int start = nums[i][0];
        int end = nums[i][1];

        if(!ans.empty()&& end <= ans.back()[1]){
            continue;
        }

        for(int j=i+1;j<n;j++){
            if(nums[j][0]<=end){
               end = max(nums[j][1],end);
            }
            else {
                break;
            }
        }

        ans.push_back({start,end});
    }

    return ans ;
}



/*Using sorting and single traversal
time: O(NlogN) +O(N)
space:O(N)
*/

/*CODE*/


vector<vector<int>> mergeIntervals(vector<vector<int>> &nums)
{
    // Write your code here.
    int n= nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        if(ans.empty() || ans.back()[1]<nums[i][0]){
            ans.push_back(nums[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1],nums[i][1]);
        }
    }

    return ans ;
}