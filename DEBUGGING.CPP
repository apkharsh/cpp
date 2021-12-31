#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		next = NULL;
	}

};

void print(Node* head){
	cout << "This is the complete linked list ";
	while(head!=NULL){

		cout << head -> data << " ";
		head = head -> next;
	}
	return;
}


// Deleting Node at i'th position

void deleteNode(Node* head, int pos){
	Node* temp = head;
	for (int i = 1; i < pos-1; i++)
	{
		temp = temp -> next;
	}

	Node* a = temp -> next->next ;
	temp->next = a;
}


// Inserting Node at i'th position

void insertNode(Node* head, int pos, int data){
	Node* newNode = new Node(data);
	Node* temp = head;

	for(int i = 1; i<pos; i++){
		temp=temp->next;
	}

	Node* a = temp->next;
	temp->next = newNode;
	newNode->next = a;
}

// Midpoint of LL
 void midPoint(Node* head){
 	Node* first = head;
 	Node* second = head;
 	int counter = 1;

 	while(second!=NULL && second->next!=NULL){
 		first=first->next;
 		second=second->next->next;
 		counter++;
 	}
 	cout << "Position of middle node is " << counter << endl;
 	cout << "Data stored in middle node is " <<  first->data << endl;
 	
 }

// Merging two sorted linked list

int main(){
	//Enter your code here

	Node *n1 = new Node(1);
	Node *n2 = new Node(2);
	Node *n3 = new Node(3);
	Node *n4 = new Node(4); 

	Node *head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	// insertNode(head,4,5);
	// insertNode(head,5,6);
	// deleteNode(head,2);
	// deleteNode(head,1);
	// deleteNode(head,3);
	print(head);


	// midPoint(head);

	// print(head);


	return 0;
}