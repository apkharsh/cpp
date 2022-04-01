#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s) {
	// methid 1 for printing vvalues of set
	// for(string value: s){
	// 	cout << s<< endl;
	// }

	// method 2 for printing

	for (auto it = s.begin(); it != s.end(); it++) {
		cout << (*it) << endl;
	}
}

int main() {
	set<string> s;
	// can make set<set<int>> as well (nested sets)
	s.insert("abc");
	s.insert("abc");
	s.insert("cdef");
	s.insert("bcd");

	auto it = s.find("abc");
	if (it != s.end()) {
		cout << (*it) << endl;
	}
	else cout << "value not found";
	// print(s);




}