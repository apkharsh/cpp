#include <bits/stdc++.h>
using namespace std;
string cheks(string s)
{
    int len = s.length();
    int k;
    if(len%2==0)
    {
        k = len/2;
    }else{
        int x = len/2;
        s.erase(s.begin() + x);
        k = s.length()/2;
    }
    string s1 = s.substr(0,k);
    string s2 = s.substr(k);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1.compare(s2)==0)
    {
        return "YES";
    }else {
        return "NO";
    }
}

int main() {
  int n;
  cin>>n;
while(n--)
{
   string s;
   cin>>s;
   cout<<cheks(s)<<endl;
   
     
}
	return 0;
}
