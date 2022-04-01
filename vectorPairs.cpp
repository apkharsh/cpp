//Implementing vector pairs

#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
	for(int i = 0 ; i< v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
// Notes
// vector<int> v[10] will make 10 vectors inside a big array.
// vector<vector<int>> will make 10 vectors inside a big vector.
int main() {
	// int n;
	// cin >> n;

	// vector<pair<int, string>> v;

	// int x, y;
	// cin >> x >> y;

	// v.push_back({1, "harsh"});
	// v.push_back({2, "daisy"});
	// v.push_back({3, "Gimrish"});

	// for(int i = 0; i <n; i++){
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }

	int N;
	cin >> N;

	vector<vector<int>> v;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		// vector<int> temp;
		v.push_back(vector<int>());
		for (int j = 0 ; j < n ; j++) {
			int x;
			cin >> x;
			// temp.push_back(x);
			v[i].push_back(x);
		}
	}


	for(int i = 0; i < N; i++) {
		printVec(v[i]);
	}


	return 0;
}

// Submitted by apkharsh