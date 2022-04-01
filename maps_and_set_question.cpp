#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int, set<string>> marks_map;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string name;
		int marks;
		cin >> name >> marks;
		marks_map[marks].insert(name);
	}

	auto curr_it = --marks_map.end();
	while (true) {
		auto &students = (*curr_it).second;
		int marks = (*curr_it).first;

		for (auto student : students) {
			cout << student << " " << marks << endl;
		}

		if (curr_it == marks_map.begin()) {
			break;
		}
		else {
			curr_it--;
		}


		
	}

	return 0;
}

// Submitted by apkharsh