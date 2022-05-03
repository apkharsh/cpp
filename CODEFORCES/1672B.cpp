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
		int counterA = 0;
		int counterB = 0;
		int n = s.length();
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'A') {counterA++;}
			else {
				if (counterA <= counterB){
					flag = false;
				}
				counterB++;
			}
		}


		if (flag && s[n - 1] == 'B') {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

// Submitted by apkharsh