// Write a code to find out the middle element of inked list in a single pass.
// Write a program to check if linked list has a loop.
// Write a program to find the third element from last in a linked list in a single pass.
// Suppose you are given a intereger array with value ranging from 1 to 100 out of which one is duplicate. Write a program to find the one duplicate value but in a shortest time complexity.
// Calculate height of binary tree.
// Write a program to reverse a linked list using recurrsion
// Write a program to head of each node
// Draw binary search tree
// Divide and conqueor algorithm
// Write a program to find all positive numbers in an array which also have their opposite sign element.(-7,4,-3,2,-8,-2,33)
// if a!=b &
// Write a program in which user enters name of the product and date of purchase, ..... such that searial number of that element is always a primary key. Store that element in a array after user has entered the data. Then ask the user y or N if he wants to put mOre data.
#include <iostream>
using namespace std;


class Node() {
public:
	int data;
	Node *next;

	Node(int data) {
		this-> data = data;
		next = NULL;
	}
}

void print(Node *head) {
	while (head != NULL) {
		cout << head->data;
		head = head->next

	}
}


int main() {
	/*Code is here*/
	// Creating linked list statically
	Node n1(1);
	Node n2(2);
	Node n3(3);
	Node n4(4);

	Node *head = &n1;
	n1.next = &n2;
	n2.next = &n2;
	n3.next = &n3;
	print(head);
}