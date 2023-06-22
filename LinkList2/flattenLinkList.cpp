/*Using recursion and merge sort
time:O(N)
space:O(1)
*/


/*CODE*/

Node * mergeLink(Node * head1,Node *head2){
	Node * temp = new Node(0);
	Node * dummy = temp;

	while(head1 != NULL && head2!= NULL){
		if(head1->data >head2->data){
			temp->child = head2;
			temp = temp->child;
			head2 = head2->child;
		}
		else {
			temp->child = head1;
			temp = temp->child;
			head1 = head1->child;
		}
	}
	if(head1){
		temp->child = head1;
	}
	else {
		temp->child=head2;
	}

	return dummy->child;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head == NULL || head->next ==NULL){
		return head;
	}
	Node *l2=flattenLinkedList(head->next);
	head->next = NULL;
	Node *newHead = mergeLink(head,l2);

	return newHead;
}