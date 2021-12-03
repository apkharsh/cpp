#include <iostream>
using namespace std;

void print(Node *head) {
	while (head->next != NULL) {
		cout << head->data << " ";
		head = head -> next;
	}
}
class node
{
public:
	int data;
	node * next;

	Node(int data) {
		this -> data = data;
		next = NULL;
	}

};

int main()
{
	//Creating linked list with 5 nodes
	Node n1(1);
	Node *head = &n1;
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	print(head);

	// /* Statically */
	// Node n1(1);
	// Node *head = &n1;
	// Node n2(2);
	// n1.next = &n2;
	// /* Dynamically */
	// Node n3 = new Node(10);
	// Node *head = n3;

	// Node *n4 = new Node(20);
	// n3-> next = n4;

	// return 0;
}