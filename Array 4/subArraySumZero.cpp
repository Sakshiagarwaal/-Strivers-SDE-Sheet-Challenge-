/*Brute force using two loops 
time:O(N*N)
space:O(1)
*/

/*CODE*/



#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
   int cnt =0,n= arr.size();
  for(int i=0;i<n;i++){
    int sum = 0;
    for(int j=i;j<n;j++){
      sum += arr[j];
      if(sum==0){
        cnt = max(cnt,j-i+1);
      }
    }
  }

  return cnt;
}






/*optimial approach using hashing  
time:O(N)
space:O(N)
*/

/*CODE*/



#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  map<int,int> mp;
  int maxAns =0, sum =0,n=arr.size();
  for(int i=0;i<n;i++){
    sum += arr[i];

    if(sum ==0){
      maxAns = i+1;
    }
    else {
      if(mp.find(sum)!=mp.end()){
        maxAns = max(maxAns,i-mp[sum]);
      }
      else {
        mp[sum] = i;
      }
    }
  }

  return maxAns;

}