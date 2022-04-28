#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

void preorder(Node* root){
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

int main(){
	Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	cout << "Ye rha preorder: ";
	preorder(root);
}

// preorder me phle root fir uska left ke element print hote hai like niche tree dekho
// phle 1 print hoga fir uska left 2 fir uska left 4
// fir 4 ke left me kuch nahi h to backtrack hoke 2 pe jyega fir vha se
// right ke elements print hona start hone lgenge and 5 print hoga fir
// backtrack and 2 ke dono child print ho chuke h to fir backtrack to 1
// then 1 ke left me sab print ho chuka hai to right me 3 print hoga
// uske baad check krenge ki 3 ke left me koi hai ki nahi..
// left me 6 hai to vp print hoga and backtrack to 3 and uska right 7 print hojyega

// iska preorder traversal will look like 1 2 4 5 3 6 7
// lets code it now!!
