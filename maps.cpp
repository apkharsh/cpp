t // Normal maps and unordered maps

#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m) {
	cout << "Map ka size " << m.size() << endl;

	for (auto &pr : m) {
		cout << pr.first << " " << pr.second << endl;
	}
}
int main() {
	map<int, string> m;
	m[1] = "Harsh";
	m[2] = "Gimrish";
	m[3] = "Daisy";

	auto it = m.find(8);
	if (it != m.end()){
		cout << (*it).first << " " << (*it).second;
	}
	else{
		cout << "Value not found " << endl;
	}

	print(m);


	return 0;
}

// Submitted by apkharsh