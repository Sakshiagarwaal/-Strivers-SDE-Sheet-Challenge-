/* Brute force : Using nested loop and searching next greater element 
time: O(N*N)  {In case of a sorted array in desc order example: arr=[7,4,2,1]}
space: S(N)
*/

/*CODE*/


/*optimised approach using stack
time: O(N)
space:O(N)
*/

/*CODE*/

/*coding ninja*/
#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here

    stack<int> s;
    vector<int> ans(n,-1);
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if( s.top()>arr[i]){
            ans [i] = s.top();
        }

        else {
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            } 
            if(!s.empty())
            ans[i]=s.top(); 
        }
        s.push(arr[i]);
    }
    
    return ans ;
}



/*gfg*/
 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        vector<long long> v(n,-1);
        stack<long long> s;
        s.push(arr[n-1]);
        
        for(int i=n-2;i>=0;i--){
            if(s.top()<=arr[i]){
                 while(!s.empty() && s.top()<=arr[i]){
                    s.pop();
                }
            }
            if(!s.empty())
                v[i]=s.top();
                
                s.push(arr[i]);
        }
        
        return v;
    }
