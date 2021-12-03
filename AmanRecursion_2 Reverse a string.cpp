#include <iostream>
using namespace std;

void reverse(char s) {
	if (s.length() == 0) { // base condition
		return;
	}

	string ros = s.substr(1);
	cout << s[0] << " ";
	reverse(ros);
}

cout