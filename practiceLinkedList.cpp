
//INSERTING NODE AT ITH POSITION
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data=data;
		next= NULL;
	}
};


void insert(Node*head, int i, int data){
	Node *newNode = new Node(data);
	int count = 0;
	Node* temp = head;

	while(temp!= NULL; && count < i-1){
		temp = temp->next;
		count++;
	}

	if(temp!=NULL){
		Node *a = temp->next;
		temp -> next = newNode;
		newNode -> next = a;
	}
}

void print(Node *head){
	while(head!=NULL){
		cout << head->data;
		head = head -> next;
	}
}



int main(){
	
	//Enter your code here

	//code to insert node at i'th position
	//at first creating linked list of 5 nodes

	Node* n1 = new Node(1);
	Node* head = n1;
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);
	Node* n4 = new Node(4);

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	// Now we goota code the main thing

	// Node *head = takeInput_better();
	print(head);

	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// //Inserting values in a ilnked list until we input -1 integer
// class Node {
// public:
// 	int data;
// 	Node *next;
// 	Node(int data) {
// 		this->data = data;
// 		next = NULL;
// 	}
// };

// //CREATING INPUT FUNCTION

// Node *takeInput(){
// 	int data;
// 	cin >> data;
// 	Node *head = NULL;
// 	while(data!=-1){
// 		Node *newNode = new Node(data);
// 		if(head==NULL){
// 			head = newNode;
// 		}

// 		else{
// 			Node *temp = head;
// 			while(temp->next!=NULL){
// 				temp = temp->next;

// 			}
// 			temp->next = newNode;
// 		}

// 		cin >> data;
// 	}
// 	return head;
// }


// Node *takeInput_better(){
// 	int data;
// 	cin >> data;
// 	Node *head = NULL;
// 	Node *tail = NULL;
// 	while(data!=-1){
// 		Node *newNode = new Node(data);
// 		if(head==NULL){
// 			head = newNode;
// 			tail = newNode;
// 		}

// 		else{
// 			tail->next=newNode;
// 			tail= tail->next;
// 		}

// 		cin >> data;
// 	}
// 	return head;
// }


// void print(Node *head){
// 	while(head!=NULL){
// 		cout << head -> data << endl;
// 		head =  head -> next;
// 	}
// }

// int main() {
// 	/*write your code here*/
// 	Node *head = takeInput_better();
// 	print(head);
//  	return 0;
// }

// //Printing a linked list
// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
// 	int data;
// 	Node *next;
// 	//Creating constructor to provide values easity so we dont have to input them later and instead they will be added when we pass them.
// 	Node(int data) {
// 		this-> data = data;
// 		next = NULL;
// 	}
// };

// void print(Node *head) {
// 	while (head != NULL) {
// 		cout << head->data << endl;
// 		head = head->next;
// 	}
// 	return;
// }

// int main() {
// 	/*write your code here*/

// 	Node *n1 = new Node(1);
// 	Node *head = n1;
// 	Node *n2 = new Node(2);
// 	Node *n3 = new Node(3);
// 	Node *n4 = new Node(4);

// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = n4;

// 	print(head);
// 	return 0;
// }