/*Brute force count occurence of all 1 to N integers
time: O(N*N)
space: O(1)
*/


/*CODE*/


#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array
    int repeating = -1, missing = -1;

    //Find the repeating and missing number:
    for (int i = 1; i <= n; i++) {
        //Count the occurrences:
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) cnt++;
        }

        if (cnt == 2) repeating = i;
        else if (cnt == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
}




/*Optimised approach using hashing 
time: O(2*N)
space: O(N)
*/
/*CODE*/


#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array
    int hash[n + 1] = {0}; // hash array

    //update the hash array:
    for (int i = 0; i < n; i++) {
        hash[a[i]]++;
    }

    //Find the repeating and missing number:
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 2) repeating = i;
        else if (hash[i] == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
}




/*Interviewer not happy with extra space so optimise it */



/*Optimised using maths 
time: O(N)
space:O(1)
*/


/*CODE*/


#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	 long long m = (long long) n;
    long long s =0 , sn =0, s2=0,s2n =0;
    sn =(m*(m+1))/2;
    s2n = (m*(m+1)*(2*m+1))/6;
    
    for(int i=0;i<m;i++){
        s += (long long)arr[i];
        s2 += (long long )arr[i]*(long long)arr[i];
    }
    
    long long val1 = s-sn;
    long long val2 = (s2-s2n);
    long long val3 = val2/val1;
    long long x  = (val1+val3)/2;
    long long y = val3-x;

    return {(int)y,(int)x};
	
}


