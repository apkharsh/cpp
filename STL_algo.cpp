#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int min = *min_element(v.begin() + 3, v.end());
	cout << min << endl;

	int max = *max_element(v.begin(), v.end());
	cout << max << endl;

	int sum = accumulate(v.begin(), v.end() ,0);
	cout << sum << endl;

	// how to find element in a vector

	auto it = find(v.begin(), v.end(), 2);
	if(it!=v.end()){
		cout << *it << endl;
	}

	else cout << "Element not found" << endl;

	// How to reverse string or vector

	reverse(v.begin(), v.end());
	for(auto val: v){
		cout << val << " ";
	}

	string s = "abcfdhef";
	reverse(s.begin() , s.end());
	cout << s << endl;

	return 0;
}

// Submitted by apkharsh