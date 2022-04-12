
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
        bool check = false;
        int X; cin >> X;
        int a = 0; int b = 1; int c = -1;
        for (int C = 0; C < pow(2,20); C++) {
            if ((a ^ b + b ^ c + c ^ a) == X) {
                cout << a << b << c;
                check = true;
            }

        }

        if(check) cout << a << " " << b <<" " <<  c << endl;
        else cout << -1 << endl;

    }
    return 0;
}

// Submitted by apkharsh