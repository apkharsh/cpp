#include <bits/stdc++.h>
using namespace std;

// int main() {
// set<pair<int, int>, int> s;
// pair<int, int> p1, p2;
// p1 = {2, 3};
// p2 = {1, 4};

// comparison ke lie phle first element ko dekhte h dono pairs ke or usme se jp chota h vo pair smaller ajata h answer me or agar first element dono pair ka same hai to second element ko compare krenge.
// cout << (p1 > p2);

// }

int main() {
	map<pair<string, string>, vector<int>> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string fn;
		string ln;
		int ct;
		cin >> fn >> ln >> ct;

		for (int j = 0; j < ct; j++) {
			int x;
			cin >> x;
			s[ {fn, ln}].push_back(x);
		}
	}

	for (autp &pr : it) {
		auto &full_name = pr.first;
		auto &list = pr.second;
		cout << full_name.first;
		cout << list.size() << endl;
	}

}