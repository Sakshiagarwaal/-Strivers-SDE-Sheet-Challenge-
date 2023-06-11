/*using two queue (push operation costly)
time:O(N)
space:O(2N)
*/

/*CODE*/

#include <bits/stdc++.h> 
class Stack {
	// Define the data members.

    queue<int> q1;
    queue<int> q2;
    int size;

   public:
    Stack() {
        // Implement the Constructor.
        size=0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return size==0;
    }

    void push(int element) {
        // Implement the push() function.
        if(q1.empty()){
            q1.push(element);
        }

        else{
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(element);
            
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }
        
        size++;
        
    }

    int pop() {
        // Implement the pop() function.
        int x =  -1;
        if(!q1.empty()){
            x = q1.front();
            q1.pop();
            size--;
        }
        
        return x;
    }

    int top() {
        // Implement the top() function.
           int x =  -1;
        if(!q1.empty()){
            x = q1.front();
        }
        
        return x;
    }
};



/*Using one queue
time: O(N)
space: O(N)
*/

/*CODE*/

#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
queue<int> q;

   public:
    Stack() {
        // Implement the Constructor.
     
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q.size()==0;
    }

    void push(int element) {
        // Implement the push() function.
        q.push(element);
        for(int i=0;i<q.size()-1;i++){
            q.push( q.front());
            q.pop();
        }
      
    }

     int pop() {
        // Implement the pop() function.
        int x =  -1;
        if(!q.empty()){
            x = q.front();
            q.pop();
            
        }
        
        return x;
    }

    int top() {
        // Implement the top() function.
           int x =  -1;
        if(!q.empty()){
            x = q.front();
        }
        
        return x;
    }
};


