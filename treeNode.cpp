#include <bits/stdc++.h>
#include "treeNode.h"
using namespace std;


treeNode<int>* takeInput() {
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	treeNode<int>* root = new treeNode<int>(rootData);

	int n;
	cout << "Enter number of children of " << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		treeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

treeNode<int>* takeInputLevelWise() {
	int rootData;
	cin >> rootData;
	treeNode<int>* root = new treeNode<int>(rootData);

	queue<treeNode<int>*> pendingNodes;

	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		treeNode<int> front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter number of childrens " << endl;

		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++) {
			int childData;
			cout << "Enter " << i << "th child of " << front->data;
			cin >> childData;
			// treeNode<int> child(data); // static allocation so wont work
			treeNode<int>* child = new treeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}


void printTree(treeNode<int>* root) {

	if (root == NULL) {
		return;
	}

	cout << root->data << ": ";

	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << " ";
	}
	cout << "root ke children ka size " << root->children.size();

	cout << endl;

	for (int i = 0; i < root->children.size(); i++) {
		printTree(root->children[i]);
	}
}

int main() {
	// treeNode<int>* root = new treeNode<int>(1);
	// treeNode<int>* node1 = new treeNode<int>(2);
	// treeNode<int>* node2 = new treeNode<int>(3);

	// root->children.push_back(node1);
	// root->children.push_back(node2);
	treeNode<int>* root = takeInputLevelWise();
	// takeInput();
	printTree(root);

	// TODO: delete the tree
	return 0;

}

//Contributed by apkharsh