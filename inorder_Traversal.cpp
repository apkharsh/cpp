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
/* what is inorder?
 Isme phle left most root print hota hai then parent then right
 jese hmare tree me dekho isme root ke left me jate rhenge jab tak leaf node na ajaye
 phle 1 wse gaye 2 then 2 se 4 and ab 4 ka koi nice hai nai left to 4 print
 karado and then backtrack to parent and print the parent and check id right
 of that parent exits and then right print karado and backtrack to parent and
 it is already printed so backtrack again and print its parent which is 1 and now 1 se jayenge 3
 amd then 3 ka left 4 and 4 ka koi left nahi to 6 print then 6 ka parent 3 and then 3 ka right 7
 and hmara traversal complete

 inorder kuch esa dikhega
 4 2 5 1 6 3 7
*/
void inorder(Node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
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

	cout << "Ye rha preorder: ";
	inorder(root);
}
