/*Brute force run two nested loops and check all cases
time:O(n^2)
space:O(1)
*/

/*CODE*/


#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int s) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == s) return "YES";
        }
    }
    return "NO";
}


/*optimal approach using hashing 
time:O(N)
space:O(N)*/


/*CODE*/

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   map<int,int> mp;
   for(auto &it:arr){
      mp[it]++;
   }

   for(auto &it:mp ){
      int x = s-it.first;
      if()
   }


   return ans ;
}