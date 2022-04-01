#include <bits/stdc++.h>
#include <climits>
using namespace std;

class Stack {
	int *data;
	int nextIndex;
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

	// Checks if the stack is empty
	bool isEmpty() {
		return nextIndex == 0;
	}

	// Inserting element in a stack
	void push(int element) {
		if (nextIndex == capacity) {
			cout << "Stack is full " << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	//Deleting top element from stack and returning that value
	int pop() {
		if (isEmpty()) {
			cout << "stack is empty" << endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}

	// Returns the top element of the stack
	int top() {
		if (isEmpty()) {
			cout << "Stack is empty " << endl;
		}
		else cout << data[nextIndex - 1] << endl;
	}

};


int main() {
	//Created an object of class stack
	Stack s1(4);

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);

	s1.top();
	s1.pop();
	// s1.pop();
	s1.pop();
	s1.pop();
	s1.top();

}