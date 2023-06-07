Node *findMiddle(Node *head) {
    // Write your code here
    Node *slow = head;
    Node *fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
    }

    if(fast==NULL) return slow;
    else  return slow->next;
    
}