/* using set 
time: O(n)
space: O(n) using set 
*/


/*CODE*/

Node *firstNode(Node *head)
{
    //    Write your code here.
    unordered_set<Node*> st;
    Node * temp = head;
    while(temp){
        if(st.find(temp)!=st.end()){
           return temp;
        }
         st.insert(temp);
         temp=temp->next;
    }
    return NULL;
}


/* optimizing space by using two pointer approach called floyd's cycle
time: O(n)
space: O(1)  
*/


/*CODE*/

Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL || head->next==NULL) return NULL;
   Node *slow = head;
   Node *fast = head;
   Node *help = head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast =fast->next->next;
        if(fast==slow){
           while(slow!=help){
            slow =slow->next;
            help=help->next;
        }
        return slow;
        }
    }

return NULL;
}