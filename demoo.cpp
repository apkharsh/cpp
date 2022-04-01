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
        int N, K;
        cin >> N >> K;

        vector<int> V(N);
        for (int i = 0; i < N; i++) {
            cin >> V[i];
        }
        sort(V.begin(),V.end());

        if(K>=N){
            cout << V[N-1] << endl;
        }
        else cout << V[K] << endl; 
                                                                                              
    }
    return 0;
}

// Submitted by apkharsh