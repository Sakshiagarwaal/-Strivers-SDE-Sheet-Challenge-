/*searching using hasmap
time:O(N)
space:O(N)
*/

/*CODE*/

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	map<int,int> mp;
	for(auto &it: arr){
		mp[it]++;
	}

	for(auto &it: mp){
		if(it.second>1){
			return it.first;
		}
	}
}


/*using sorting 
time:O(NlogN)
space:O(1)
*/


/*CODE*/

#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
sort(arr.begin(),arr.end());
for(int i=0;i<n-1;i++){
    if(arr[i] == arr[i+1]){
        return arr[i];
    }
}
return -1;
}