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
        int N; cin >> N;
        string S; cin >> S;
        int counter = 0;
        for(int i = 1; i<N; i++){
            if(S[i-1]!=S[i]) counter++;
        }
        if(counter%2==0){
            cout << counter/2 +1  << endl;
        }
        else cout << counter/2 -1 << endl;

    }
    return 0;
}

// Submitted by apkharsh