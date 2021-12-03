#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}

};

void print(Node *head) {
	while (head != NULL) {
		cout << head->data << endl;
		head = head->next;
	}
}

Node takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	while (data != -1) {
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
		}
		else {
			Node *temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = newNode;
		}
		cin >> data;
	}
	return head;

}

int main()
{
	/* code */
	//Creating linked list statically

	Node n1(10);
	Node *head = &n1;
	Node n2(20);
	Node n3(25);
	Node n4(50);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;

	print(head);
	// print(head);


	return 0;
}

