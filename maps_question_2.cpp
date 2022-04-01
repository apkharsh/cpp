// https://codeforces.com/problemset/problem/525/A


#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	// cin.ignore(); must be there when using getline(cin, s)
	int n; string s;
	cin >> n >> s;

	int count = 0;
	unordered_map<char, int> m;
	for (int i = 0; i < (n * 2) - 2 ; i += 2) {
		// keys odd number pe h jinse door khulega islie hum +2 se jump kar rhe hai bar bar
		m[s[i]]++;

		auto it = m.find('a' - 'A' + s[i + 1]);

		if (it != m.end()) {
			// 'A' - 'a' + s[i+1]] is se key ke next jo door hai uski string milegi
			if ((m['a' - 'A' + s[i + 1]]) > 1) {
				// if this is true that mean we already have that key and hum key ki value ek bar kam kar rhe hai esa karke
				m['a' - 'A' + s[i + 1]]--;

			}
			else {
				m.erase('a' - 'A' + s[i + 1]);
			}
		}
		else count++;
	}

	cout << count << endl;
	return 0;
}

// Submitted by apkharsh