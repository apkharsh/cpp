#include <bits/stdc++.h>
using namespace std;

int check(int A, int B) {
    int i = A; int j = i + 1;
    bool checker = false;

    int temp_i = 0; int temp_j = 0;
    for (i = A; i < j ; i++) {
        for (j = i + 1; j <= B; j++) {
            int gcdd = __gcd(i+1, j+1);
            if (__gcd(i, j)  > 1) {
                checker = true;
                // temp_i = i; temp_j = j;
                if (__gcd(i, j) < gcdd) {
                    temp_i = i; temp_j = j;
                }
            }
        }
    }

    if (checker) {
        cout << temp_i << " " << temp_j << endl;
    }
    else cout << -1 << endl;
}


int main()
{
    std::ios::sync_with_stdio(false);
    int T;
    cin >> T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        check(A, B);
    }
    return 0;
}

// Submitted by apkharsh