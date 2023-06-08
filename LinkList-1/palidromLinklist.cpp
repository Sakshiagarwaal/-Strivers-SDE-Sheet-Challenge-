/*using stsck:brute force
Time Complexity : O(N), for iterating over the linked list of size N.
Space Complexity : O(N
*/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    stack<int> s;
    LinkedListNode<int> *temp = head;

    while(temp){
        s.push(temp->data);
        temp=temp->next;
    }

    temp=head;

    while(temp){
        int x = s.top();
        s.pop();
        if(temp->data!=x){
            return false ;
        }
        temp=temp->next;
    }
return true ;


}

/*optimal approach
*/