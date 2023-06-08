/*time: O(n log n + n). O(n log n) 
space: O(1)
*/

/*CODE*/

#include <bits/stdc++.h> 
bool comp(pair<int,int>a, pair<int,int>b){
    double v_W1 = (double)a.second/a.first;
    double v_W2 = (double)b.second/b.first;

    return v_W1>v_W2; 
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.

    sort(items.begin(),items.end(),comp);

    double value =0;

    for(int i=0;i<n;i++){
        if(items[i].first<=w){
            value += items[i].second;
            w -=items[i].first;
        }
        else {
            value += items[i].second*((double)w/items[i].first);
            break;
        }
    }

return value;
}