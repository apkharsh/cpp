// You are given several string values and you have to print unique strings in lexiographical order.

#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
	for(auto it: s){
		cout <<  it << endl;
	}
}

int main() {
	set<string> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string str;
		cin >> str;
		s.insert(str);
	}

	// methods to delete values from set
	auto it = s.find("harsh");
	if(it!=s.end()){
		s.erase(it);
	}
	// or ese bhi delete kar skte ho
	s.erase("daimsy");

	print(s);


	// for(auto it: s){
	// 	cout << it << endl;
	// }


		return 0;
}

// Submitted by apkharsh