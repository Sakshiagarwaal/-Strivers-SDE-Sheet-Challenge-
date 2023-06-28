/*brute force forming all pairs present by running 4 loops 
time:O(N^4)
space:O(1)
*/

/*CODE*/


#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    // set<int> s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum = arr[i];
                    sum += arr[j];
                    sum+=arr[k];
                    sum+=arr[l];

                    if(sum == target){
                        return "Yes";
                    }
                }
            }
        }

    }

    return "No";
}


/*Optimal approach using hashset and set data structure
time: O(N^3logM)
space: O(2 * no. of the quadruplets)+O(N) 
*/

/*CODE*/


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size(); //size of the array
    set<vector<int>> st;

    //checking all possible quadruplets:
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            set<long long> hashset;
            for (int k = j + 1; k < n; k++) {
                // taking bigger data type
                // to avoid integer overflow:
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - sum;
                if (hashset.find(fourth) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                // put the kth element into the hashset:
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;

    }
};




/*Best approach using two nested loops and two pointer technique 
time: O(N^3)
space: O(1) no extra space to solve , used just to return answer 
*/

/*CODE*/

#include <bits/stdc++.h>

string fourSum(vector<int> nums, int target, int n) {
    // Write your code here.
    // set<int> s;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
           int k =j+1,l=n-1;
           while(k<l){
               long long sum = nums[i];
               sum += nums[j];
               sum += nums[k];
               sum += nums[l];

               if (sum == target) {
                 return "Yes";
               }
               else if (target > sum)
                 k++;

               else l--;
               }

           }

        }

    

    return "No";
}
