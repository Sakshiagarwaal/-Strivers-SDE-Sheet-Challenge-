/*brute force generating all subarray and also calculating their product
time: O(N^3)
space :O(1)
*/



/*Optimised one is kaden but that is not intutive so say the max of preffix product and suffix product approach.
time :O(N)
space :O(1)
 */

/*CODE*/

#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int prefP =1,sufP =1, maxProd =INT_MIN;
	for(int i=0;i<n;i++){
		if(prefP == 0) prefP=1;
		if(sufP == 0) sufP=1;	
		
		prefP = prefP*arr[i];
		sufP = sufP*arr[n-i-1];
		
		maxProd = max(maxProd,max(sufP,prefP)); 	
	}

	return maxProd;
}
