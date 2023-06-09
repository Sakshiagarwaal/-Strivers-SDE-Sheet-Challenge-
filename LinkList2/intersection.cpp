/*brute force 
time: O(m*n)
space:O(1)
*/

/*CODE*/

 Node *temp1 = firstHead;
    while(temp1){
        Node *temp2 = secondHead;
        while(temp2){
            if(temp2==temp1){
                int ans = temp2->data;
                 return  ans ;
            }

            temp2 = temp2->next;

        }

        temp1=temp1->next;
    }

    return -1;


    /*Better approach using hashing
    time: O()
    space: O(n)
    */



   /*CODE*/

#include<bits/stdc++.h>
using namespace std;

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_set<Node*>st;

    while(firstHead){
        st.insert(firstHead);
        firstHead = firstHead->next;
    }

    while(secondHead){
        if(st.find(secondHead)!=st.end()) return secondHead;
        secondHead = secondHead->next;
    }

    return NULL;
}