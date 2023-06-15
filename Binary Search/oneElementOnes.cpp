/*Brute force doing xor of all since x^x=0 therefor just that number will be left which appears onces 
time: O(N)
space:O(1)
*/


/*Optimised approach using binary search since the array is sorted 
time: O(logN)
space:O(1)
*/

/*CODE*/

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	
	int n = arr.size(), l=0;
	int h = n-2;
	
	while(l<=h){
		int mid = (l+h)>>1;
		
		if(arr[mid]==arr[mid^1]){
			l = mid+1;
		}
		else 
		h = mid-1;
		
	}
	
	return arr[l];
}