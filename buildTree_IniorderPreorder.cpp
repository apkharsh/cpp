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

int search(int Inorder[], int start, int end, int curr) {
	for (int i = start; i <= end; i++) {
		if (Inorder[i] == curr) {
			return i;
		}
	}
	return -1;
}

Node* buildTree(int Preorder[], int Inorder[], int start, int end) {
	static int idx = 0;

	if (start > end) {
		return NULL;
	}

	int curr = Preorder[idx];
	idx++;
	Node* node = new Node(curr);

	if (start == end) {
		return node;
	}

	int pos = search(Inorder, start, end, curr);
	node->left = buildTree(Preorder, Inorder, start, pos - 1);
	node->right = buildTree(Preorder, Inorder, pos + 1, end);

	return node;
}

void InorderPrint(Node* root) {
	if (root == NULL) {
		return;
	}

	InorderPrint(root->left);
	cout << root->data << " ";
	InorderPrint(root->right);

}


int main() {
	int Preorder[5] = {1, 2, 4, 3, 5};
	int Inorder[5] = {4, 2, 1, 5, 3};

	// Build Tree
	Node* root = buildTree(Preorder, Inorder, 0, 4);
	// InorderPrint(root);

}