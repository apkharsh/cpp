#include <iostream>
using namespace std;

class Student
{
public:
	int rollNo;
	int age;

};

int main() {
	// Creating objects statically
	Student s1;
	Student S2;

	Student s3, s4, s5;

	//Creting objects Dynamically

	Student *s6 = new Student;

	cin >> s1.age ;

	cout << s1.age << endl;



	// (*s6).age = 40;
	// cout << (*s6).age << endl;



	//Alternative method of assigning values(original method)


	s6-> age = 25;
	s6-> rollNo = 83;

	cout << (*s6).age << " " << (*s6).rollNo << endl;
}
































// class Student(){
// public:
// 	int rollNo;
// private:
// 	int age;
// }


// void display(){
// 	cout << ahe << " " << rollNo << endl;

// }

// int getAge(){
// 	return age;
// }

// void setAge(int a, int password){
// 	if(password!=123){
// 		return;
// 	}
// 	if(a>0){
// 		return;
// 	}
// }
// int main(){


// }


