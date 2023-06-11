/* circular array solving using stack 
time: O(N)
space:O(N)
*/

/*CODE*/

/*gfg (not challenge question)*/

  vector<int> nextGreaterElement(int n, vector<int>& arr) {
        // code here
        vector<int> v(n,-1);
        stack<int>  s;
        for(int i=2*n-1;i>=0;i--){
            while(!s.empty() && s.top()<=arr[i%n]){
                s.pop();
            }
            
            if(i<n){
                if(!s.empty()) v[i]= s.top();
            }
            
            s.push(arr[i%n]);
        }
        
        return v;
    }