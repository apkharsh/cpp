class Node {
public:
	int data;
	Node *next;
	//Creating constructor to provide values easity so we dont have to input them later and instead they will be added when we pass them.
	Node(int data) {
		this-> data = data;
		next = NULL;
	}
};
