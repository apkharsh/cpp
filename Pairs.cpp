#include <bits/stdc++.h>
using namespace std;

int main() {
	pair<int, string> p1[2];
	p1[0] = {1, "harsh"};
	p1[1] = {2, "daisy"};
	p1[2] = {3, "Gimrish"};
	p1[3] = {4, "Harjyot"};

	// cout << p1.first << " " << p1.second;

	for (int i = 0; i < 4; i++){
		cout << p1[i].first << " " << p1[i].second << endl;
	}

	return 0;
}

// And thats how pair works.

// Submitted by apkharsh