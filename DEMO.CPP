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
		int a, b;
		cin >> a >> b;

		int count_x = 0;
		int count_y = 0;

		int x = 1;
		int y = 1;

		while (x < a && y < b) {
			if(a > b){
				count_x++;
			}
			else count_y++;
		}
	}
	return 0;
}

// Submitted by apkharsh