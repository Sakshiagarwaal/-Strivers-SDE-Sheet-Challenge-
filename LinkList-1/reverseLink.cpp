/*3  pointer approach*/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> * curr = head;
    LinkedListNode<int> *nextP;

    while(curr){
         nextP = curr->next;
        curr->next=prev;
        prev=curr;
        curr= nextP;
       
    }

    return prev;
}


/*recurssion*/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL || head->next == NULL) return head;

    LinkedListNode<int> *reverseHead = reverseLinkedList(head->next);
     
     head->next->next = head;
     head->next =NULL;
      
      return reverseHead;
}