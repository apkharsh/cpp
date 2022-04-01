// Given N strings and Q queries.
// In each query you are given a string.
// Print yes if string is present else print no.

// N<=10^6
// |S| <= 100
// Q<=10^6


#include <bits/stdc++.h>
using namespace std;

// Note: we can't do set<set<int>> s; as unordered sets are implemented using hashtables unlike ordered sets which are implemented using binary trees.
int main() {
	// Phle N strings ka input lelete hai
	int N;
	cin >> N;

	unordered_set<string> str;
	for (int i = 0; i < N; i++) {
		string S;
		cin >> S;
		str.insert(S);
	}

	int Q;
	cin >> Q;
	while (Q--) {
		string check;
		cin >> check;
		// auto it = str.find(Q);

		if (str.find(check) != str.end()) {
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;

	}
}