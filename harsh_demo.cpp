#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	//Creating constructor to provide values easity so we dont have to input them later and instead they will be added when we pass them.
	Node(int data) {
		this-> data = data;
		next = NULL;
	}
};

print(Node *head) {
	cout << head-> data << " ";
	head = head->next;
}

int main() {
	/*write your code here*/

	Node *n1 = new Node(1);
	Node *head  = n1;
	Node *n2 = new Node(2);
	Node *n3 = new Node(3);
	Node *n4 = new Node(4);
	Node *n5 = new Node(5);
	Node *n6 = new Node(6);

	n1 *next = n2;
	n2 *next = n3;
	n3 *next = n4;
	n4 *next = n5;
	n5 *next = n6;

	print(head);



	return 0;
}