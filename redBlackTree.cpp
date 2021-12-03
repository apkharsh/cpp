// Red black tree

// ->it is a self balancing bst tree
// ->every node is either black color or red color
// ->root node is always black
// ->every leaf which is nill or contains null value should always be black
// ->if node is red then its children are black
// ## every path from a node to any of its descendent nill has same no of black roots

// Insertion in red black tree

// ->if tree is empty, create new node as root node with color as black
// ->if tree is not empty then create a new node with color red
// ->if parent of new node is black then exit
// ->if parent of new node is red then check the color of parent sibling of new node
// 1.) if color is black or null then do suitable rotations as per AVL tree and then recolor
// 2.) if color is red then recolor and also check if parent's parent of new node is not root node then recolor and again recheck.
// -> no two adjacent red nodes
// ->count no of black nodes in each path


// input values - 10, 18, 7, 15, 16, 30, 25, 40, 60, 2, 1, 70



#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << " Hello world " << endl;
}




// Null graph is modified version of trivial graph


// Graph is one of rhe mosr  omprotant data structure used by many machine learning algorithms for inmproving their effeciency . at everys tep we analyse the data[]
