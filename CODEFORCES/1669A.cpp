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
    	int n;
    	cin >> n;

    	if(n>=1900) cout << "Division 1" << endl;
    	else if(n>=1600 && n<=1899) cout << "Division 2" << endl;
    	else if(n>=1400 && n<=1599) cout << "Division 3" << endl;
    	else cout << "Division 4" << endl;
    }
    return 0;
}

// Submitted by apkharsh