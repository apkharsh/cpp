
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
        int X, Y;
        cin >> X >> Y;
        if(X<Y){
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}

// Submitted by apkharshnvm install --lts