// https://codeforces.com/problemset/problem/4/C

// Method 1
// #include <bits/stdc++.h>
// #include <cstdio>
// #include <cstring>
// #include <cmath>

// using namespace std;

// int main()
// {
//     std::ios::sync_with_stdio(false);
//     // Write your code here.

//     int n;
//     cin >> n;
//     string s;

//     map<string, int> database;
//     // maps me string insert karvali..
//     for (int i = 0; i < n; i++) {
//         cin >> s;
//         if(database.find(s)==database.end()){
//             database.insert({s,0});
//             cout << "OK" << endl;
//         }
//         else{
//             database[s]++;
//             cout << s << database[s] << endl;
//         }
//     }
//     return 0;
// }

// Submitted by apkharsh

// method 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map<string, int> database;
    string s;
    while (n--)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}