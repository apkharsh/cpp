#include <climits>
using namespace std;


class Stack {
	int *data;
	int nextIndex = 0;
	int capacity;
public:
	Stack(int totalSize) {
		data = new int[totalSize];
		nextIndex = 0;
		capacity = totalSize;
	}

	//return the number of element present in stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		return nextIndex == 0;
	}

	int top() {
		if (isEmpty()) {
			cout << "Stack is full " << endl;
		}
		else cout << data[nextIndex - 1];
	}

	void push(int element) {
		if (nextIndex == capacity) {
			cout << "Stack is full " << endl;
			return;
		}
		else {
			data[nextIndex] = element;
			nextIndex++;
		}
	}

	int pop(){
		if(isEmpty()){
			cout << "Stack is empty " << endl;
		}
		nextIndex--;
		return nextIndex;
	}
};