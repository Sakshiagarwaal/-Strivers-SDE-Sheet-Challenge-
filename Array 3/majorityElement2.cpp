/*brute force using nested loops and counting manually 
time: O(N^2)
space: O(1)
*/

/*CODE*/

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int ans = -1;
	for(int i=0;i<n;i++){
		int x = arr[i];
		int cnt = 1;
		for(int j=i+1;j<n;j++){
			if(x == arr[j]){
				cnt++;
			}
		}
		
		if(cnt > n/2){
			ans = arr[i];
		}
	}
	
	return ans ;
}



/*optmised approach
time: O(n*logn)+O(n)
space: O(n)
*/


/*CODE*/

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int> mp;

	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}

	for(auto &it:mp){
		if(it.second>n/2){
			return it.first;
		}
	}
	return -1;
}




/*BEST approach
time: O()
space:O()
*/


/*CODE*/


