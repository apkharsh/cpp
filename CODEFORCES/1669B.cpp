#include<bits/stdc++.h>
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
		int n,x;
		cin >> n;
		unordered_map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			mp[x]++;
		}

		int value = 0;
		bool flag = false;
		for (auto it : mp)
		{
			// cout << it.first << " " << it.second << endl;
			if(it.second>=3){
				value = it.first;
				flag = true;
			}
		}

		if(flag){
			cout << value << endl;
		}
		else cout << -1 << endl;
	}
	return 0;
}

// Submitted by apkharsh