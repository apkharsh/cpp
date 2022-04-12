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
		long long N; cin >> N;
		long long B = 3;

		if (N % 2 == 0 && N % 4 == 0) {
			B = N^3;
		}
		else if ((N - 1) % 4 == 0) {
			B = N&(3 ^ (N - 1));
		}

		cout << B << endl;
	}
	return 0;
}

// Submitted by apkharsh