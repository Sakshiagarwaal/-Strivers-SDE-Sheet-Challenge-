#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minE=INT_MAX,maxProfit=0,n=prices.size();

    for(int i=0;i<n;i++){
        minE = min(minE,prices[i]);
        maxProfit= max(maxProfit,prices[i]-minE);
        
        }

        return maxProfit;
