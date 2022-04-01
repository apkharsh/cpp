#include <bits/stdc++.h>
using namespace std;

class Stack {
	int* data;
	int nextIndex;
	int capacity;
public:
	Stack() {
		data = new int[4];
		nextIndex = 0;
		capacity = 4;
	}

	//inserting element
	int push(int element) {
		if (nextIndex == capacity) {
			int* newData = new int[capacity * 2];
			for (int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			capacity = capacity * 2;
			delete [] data;
			newData = data;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	//Check if stack is empty
	bool isEmpty() {
		return nextIndex == 0;
	}

	//Top ekement of stack
	int top() {
		if (isEmpty()) {
			cout << "stack is empty " << endl;
		}
		cout << data[nextIndex - 1] << endl;

	}

	// checking size of stack
	int size() {
		if (isEmpty()) {
			cout << "Stack isEmpty" << endl;
		}
		return nextIndex--;
	}

	// delete element
	int pop() {
		if (isEmpty()) {
			cout << "stack isEmpty" << endl;
		}
		nextIndex = -1;
		return data[nextIndex];
	}
};



int main() {
	//Enter your code here
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	s.top();


	return 0;
}