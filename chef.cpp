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
        int N, X;
        cin >> N >> X;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + N);

        if (arr[0] == 1) {
                cout << max(N, X) << endl;
            }
            else if (arr[0] >= X) {
                cout << min(N, X) << endl;
            }

            else {
                if (X % arr[0] == 0) {
                    cout << X / arr[0] << endl;
                }
                else {
                    cout << (X / arr[0]) + 1 << endl;
                }

            }
    }
    return 0;
}

// Submitted by apkharsh