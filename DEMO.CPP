
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
        int N;
        cin >> N;
        int arr[N];
        // input lelia hai
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int sum = accumulate(arr, arr+N, 0);

        int a = 1;
        int steps = 0;

        while(sum>0){
           sum = sum - a;
           a = a + 1; 
           steps = steps + 1;
    
        }

        // cout << "Steps ki value " << steps;

        if(sum>0){
            cout <<steps << endl;
        }
        else cout << steps-1 << endl;

    }
    return 0;
}

// Submitted by apkharsh