#include <bits/stdc++.h>
using namespace std;
#include "Nodee.cpp"


int main()
{
	//creating two nodes Staticallly
	Node n1(1);
	Node n2(2);
	n1.next = &n2;
	Node* head = &n1;

	// we have stored he address of n1 in head and we have written Node before head pointer because the data stored in thi spointer is of Node data type;

	// cout << head -> data << endl;
	// cout << n2.data;
	//Creating 2 nodes Dynamically

	Node *n3 = new Node(3);
	Node *head = n3;
	Node *n4 = new Node(4);
	n3 -> next = n4;

	return 0;
}