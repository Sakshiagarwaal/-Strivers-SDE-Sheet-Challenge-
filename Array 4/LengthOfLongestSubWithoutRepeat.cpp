/*Most optimised used map and store element and index they last appeared at.
time:O(N)
space:O(N)*/


/*CODE*/


#include <bits/stdc++.h> 
int uniqueSubstrings(string st)
{
    //Write your code here

    int n = st.length(),maxAns = 0;
      vector<int> mp(256,-1);
      int l=0,r=0,i=0;
      while(r<n){
          if(mp[st[r]] !=-1){
            l= max(mp[st[r]]+1,l);
          }
        
         mp[st[r]] = r;
        maxAns= max(maxAns,r-l+1);
          r++;
         
      }

    return maxAns;  
}