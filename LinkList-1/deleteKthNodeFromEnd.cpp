Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node *dummy = new Node();
    dummy->next = head;
    Node *fast = dummy;
    Node *slow= dummy;
    
    for(int i=0;i<K;i++){
        fast=fast->next;
    }
    
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    
    slow->next=slow->next->next;
    
    return dummy->next;
}
