#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*Write your code here*/
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		int flag = 1;
		int i = 0;
		for(i=0; i <s.size(); i++){
			int cnt = 1;
			while(s[i]==s[i+1] && i<s.size()-1){
				cnt++;
				i++;
			}

			if(cnt<2){
				flag = 0;
				break;
			}
		}

		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}