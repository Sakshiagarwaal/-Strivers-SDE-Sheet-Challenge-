/*time: O(max(m,n))
space:O(max(m,n))
*/


/*CODE*/


Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
      if(num1 == NULL) return num2;
   if(num2 == NULL) return num1;

   int carry  = 0;
    Node * p1= num1;
    Node *p2= num2;
    
    Node * dummy = new Node();
    Node * temp = dummy;

    while(p1 != NULL || p2 != NULL || carry!=0){
      int sum=0;
      if(p1){
        sum  += p1->data;
        p1=p1->next;
      }

        if(p2){
        sum  += p2->data;
        p2=p2->next;
      }

      if(carry !=0){
        sum += carry;
      }

      Node * num3 = new Node(sum%10);
      temp->next =  num3;
      temp=num3;

      carry = sum/10;

   }
return dummy->next;

    
}