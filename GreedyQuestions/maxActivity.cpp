/*similar to maximum meetings
time : O(n)+O(nlogn)+O(n) ~ O(nlogn)
space:O(n) used extra space */

/*CODE*/

#include <bits/stdc++.h> 
using namespace std;
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> v;
    int n= start.size();
    for(int i=0;i<n;i++){
        v.push_back({finish[i],start[i]});
    }

    sort(v.begin(),v.end());
  int limit = -1,cnt=0;
    for(int i=0;i<n;i++){
        int end= v[i].first;
        int start = v[i].second;

        if(start >=limit){
            cnt++;
            limit= end;
        }
      
    }

    return cnt ;
}