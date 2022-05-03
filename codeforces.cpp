#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		string s;
		cin >> s;
		int n = s.length();

		if (s.length() <= 1) {
			cout << "NO" << endl;
		}
		else {
			int counterA = 0;
			int counterB = 0;
			for (int i = 0; i < n ; i++) {
				if (s[i] == 'A') {
					counterA++;
				}
				else counterB++;
			}

			if (counterA / counterB >= 1) {
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;

		}

	}

	return 0;
}

// Submitted by apkharsh