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

void preorder_c(Node* root){
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	preorder_c(root->left);
	preorder_c(root->right);
}

int search(int inorder[], int start, int end, int key) {
	for (int i = start; i <= end; i++) {
		if (inorder[i] == key) {
			return i;
		}
	}
	return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end) {
	static int idx = 0;
	int curr = preorder[idx++];
	int pos = search(inorder, start, end, curr);
	Node* node = new Node(curr);
	node->left = buildTree(preorder, inorder, start, pos - 1);
	node->right = buildTree(preorder, inorder, pos + 1, end);

}

int main() {
	int preorder[] = {1, 2, 4, 3, 5};
	int inorder[] = {4, 2, 1, 3, 5};

	int start = 0;
	int end = 4;

	Node* root = buildTree(preorder, inorder, start, end);

	preorder_c(root);

}