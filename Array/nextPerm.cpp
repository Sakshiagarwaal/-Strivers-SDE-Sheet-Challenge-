/*Brute Force
time: O(n!*n)
space: O(n)
approach: create all and store to find lexiaographically the next greatest of given 
*/



/*second approach*/


/*In built function
time : O(n!*n)
space: O(1)
*/

/*CODE*/

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    //  Write your code here.
    next_permutation(arr.begin(),arr.end());

    return arr;
}

/*Third approach*/

/*Algo optimised approach
time: O(n)
space: O(1)
*/

/*CODE*/

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    //  Write your code here.
    
    int idx = -1;

    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }

    if(idx ==-1){
        reverse(arr.begin(),arr.end());
        return arr;
    }

    for(int i=n-1;i>idx;i--){
        if(arr[i]>arr[idx]){
            swap(arr[idx],arr[i]);
            break;
        }
    }
    
    sort(arr.begin()+idx+1,arr.end());

    return arr;
}