/*approach 
time : O(n)+O(nlogn)+O(n) ~ O(nlogn)
space:O(n) used extra space */

#include <bits/stdc++.h> 
using namespace std;


bool comp( const pair<int, pair<int,int>>& a, const pair<int, pair<int,int>>& b ){
    
    if(a.first<b.first) return true;
    
    else if(a.first>b.first) return false ;

    else if(a.second.second<b.second.second) return true ;
    
    else return false ;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<pair<int,pair<int,int>>>v;
    int n= end.size();
    
    for(int i=0;i<n;i++){
        v.push_back({end[i],{start[i], i+1}});
    }

    sort(v.begin(),v.end(),comp);
    vector<int> ans ;
    int limit=-1;
    for(int i=0;i<n;i++){
        int endTime= v[i].first;
        int startNext = v[i].second.first;
        
        if(startNext>limit){
            ans.push_back(v[i].second.second);
            limit = endTime;
        }
    }
    
    return ans ;
}