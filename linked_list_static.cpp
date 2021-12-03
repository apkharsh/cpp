#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

void printList(Node* n) {
	while (n != NULL) {
		cout << n->data << endl;
		n = n-> next;
	}
}

int main() {

	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head -> data = 1;
	head ->next = second;

	second -> data = 20;
	second->next = third;

	third -> data = 40;
	third ->next = NULL;


	printList(head);
}