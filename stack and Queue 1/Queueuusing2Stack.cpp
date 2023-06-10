/*time: O(N) for push operation
space : O(2N)~O(N)
*/

/*CODE*/

#include <bits/stdc++.h>
using namespace std;

class Queue {
    // Define the data members(if any) here.
    stack<int> s1;
    stack<int> s2;
   
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        
        s1.push(val);

         while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQueue() {
        // Implement the dequeue() function.
        int x = -1;
        if(!s1.empty()){
            x = s1.top();
            s1.pop();
        }

        return x;
    }

    int peek() {
        // Implement the peek() function here.
         int x = -1;
        if(!s1.empty()){
            x = s1.top();
        }

        return x;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return s1.size()==0;
    }
}; 


/*more optimized solution making push operation O(1) and top and pop operations are O(1) amortised complexity sometimes O(1) rearly O(N)
time: O(1)
space: O(2N)
*/


/*CODE*/

#include <bits/stdc++.h>

class Queue {
    // Define the data members(if any) here.
    stack<int> s1;
    stack<int> s2;
    
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        s1.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(!s2.empty()){
            int x= s2.top();
            s2.pop();
            return x;
        }
        else{
            
            if(s1.empty()) return -1;

            else{
                 while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        int x= s2.top();
            s2.pop();
            return x; 
            }
          
            
        }
    }

    int peek() {
        // Implement the peek() function here.
           if(!s2.empty()){
            int x= s2.top();
            return x;
        }
        else{
            if(s1.empty()) return -1;
            
            
            else {
                while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        int x= s2.top();
            return x; 
            }
           
            
        }
        
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
         return (s2.empty()&& s1.empty());
    }
};