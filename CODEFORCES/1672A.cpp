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
		int n, x;
		cin >> n;
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			count += (x-1);
		}

		if(count%2){
			cout << "errorgorn" << endl;
		}
		else cout << "maomao90" << endl;
	}
	return 0;
}

// Submitted by apkharsh