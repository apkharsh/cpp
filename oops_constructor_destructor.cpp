//Copy constructor

class Student {
public:
	int rollNo;

private:
	int age;

public:
	//Default constructor
	/*Student(){
	cout << "Constructor called ! " << endl;
	}*/

	// Parameterized constructor

	Student(int rollNo) {
		cout << "Constructor 2 called ! " << endl;

		this -> rollNo = rollNo;
	}

	Student(int a, int r) {
		cout << "This : " << this << endl;
		cout << "Constructor 3 called! " << endl;
		this -> age = a;
		this -> rollNo = r;
	}
}

int main() {
	Student s1(10, 20);
	cout << "S1 : " ;
	s1.display();

	Student s2(s1);
	cout << "S2 : ";
	s2.display();
}