
#include <bits/stdc++.h>
using namespace std;
//WE wanna create a linked list dynamically without using constructors and we will print this linked list too

class Node{
public:
	int data;
	Node* next;
};

void print(Node *head) {
	while(head!=NULL){
		cout << head-> data << " ";
		head = head->next;
	}
	
}
int main()
{
	/* code */

// CREATED NODE AND ASSIGNED THEIR ADDRESS NULL;

	Node* n1 = NULL;
	Node* n2 = NULL;
	Node* n3 = NULL;
	Node* n4 = NULL;
	Node* n5 = NULL;

// CREATING NODE DYNAMICALLY

	n1 = new Node();
	n2 = new Node();
	n3 = new Node();
	n4 = new Node();
	n5 = new Node();

// LINKING HEAD AND NODES 

	Node *head = n1;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n5->data = 5;
	
// CALLING OUR PRINT FUNCTION AND PASSING IT WITH NODE TYPE VALUE(HEAD)
	print(head);

	return 0;
}