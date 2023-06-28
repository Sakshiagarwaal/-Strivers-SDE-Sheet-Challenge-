/*Brute force sort the array 
time: O(n*logn)
spavce:O(1)
*/

/*CODE*/


#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    if(n==0) return 0;
    sort(arr.begin(),arr.end());
    int ans =1,cnt =1,prevE = arr[0] ;
    for(int i=1;i<n;i++){
        if(arr[i]== prevE+1){
            cnt++;
        }

        else if (arr[i] != prevE) {
          cnt = 1;
        }
        prevE = arr[i];
        ans = max(ans,cnt);
    }

    return ans ;
}





/*Using hashing 
time:O(N)
space:O(1)
*/


/*CODE*/

using namespace std;
int longestConsecutive(vector < int > & nums) {
  set < int > s;
  for (int num: nums) {
    s.insert(num);
  }

  int maxAns = 0;

  for (int num: nums) {
    if (!s.count(num - 1)) {
      int x = num;
      int cnt = 1;

      while (s.count(x + 1)) {
        x += 1;
        cnt += 1;
      }

      maxAns = max(maxAns, cnt);
    }
  }

  return maxAns;
}