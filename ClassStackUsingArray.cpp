using namespace std;
class StackUsingArray{
	int *stack;
	int nextIndex;
	int capacity;


	public:
		StackUsingArray(int totalSize){
			stack = new int[totalSize];
			nextIndex = 0;
			capacity = totalSize;

		}

		int size(){
			return nextIndex;
		}

		bool isEmpty(){
			return nextIndex == 0;
		}

		void push(int element){
			if(nextIndex==capacity){
				cout << "Stack is full" << endl;
			}
			stack[nextIndex] = element;
			nextIndex++;
		}

		int pop(){
			if(isEmpty()==true){
				cout << "stack is empty";
			}
			nextIndex--;
			return stack[nextIndex];

		}

		int top(){
			if(isEmpty()==true){
				cout << "stack is empty";
			}
			return stack[nextIndex-1];
		}

		// Printing stack
};