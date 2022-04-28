#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

/* Post order me kya hota h ki phle left most child then right then unka parent
phle hm left me jayenge leaf node tak and 4 print karvadenge and then parent pe
which is 2 and then dekhege uska right hai ki nahi which exits to hm use print karvake
back to parent and then will print parent and then parent se backtrack to parent which is 1
and then right me jayenge which is 3 and uska left exit karta h which is 6 to use print karvake
back to parent because 6 ke niche kuch nai to backtrack hojyega 
and then 3 ka right print karvake parent print karvadenge which is 3 and then backtrack and parent pe
which is 1 and 1 ka left bhi print ho chuka pura and right bhi to anb parnt print hojyega

post order will look like this 4 5 2 6 7 3 1


postorder kuch esa dikhega
*/

void postorder(Node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";

}

/* how my tree looks like

         1
      2      3
   4    5  6   7

*/ 

int main(){
	Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	cout << "Ye rha postorder: ";
	postorder(root);
}
