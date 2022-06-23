 




















// #include <bits/stdc++.h>
// using namespace std;

// int lower_bound(vector<int> v, int element) {
// 	int low = 0;
// 	int high = v.size() - 1;
// 	while (high - low > 1) {
// 		int mid = (high + low) / 2;
// 		if (v[mid] < element) {
// 			low = mid + 1;
// 		}
// 		else high = mid;
// 	}

// 	if (v[low] >= element) {
// 		cout << low << " " << v[low] << endl;
// 	}
// }

// int upper_bound(vector<int> v, int element) {
// 	int low = 0;
// 	int high = v.size() - 1;
// 	while (high - low > 1) {
// 		int mid = (high + low) / 2;
// 		if (v[mid] <= element) {
// 			low = mid+1;
// 		}
// 		else high = mid;
// 	}

// 	if (v[low] > element) {
// 		// cout << low << " " << v[low] << endl;
// 		return low;
// 	}

// 	if(v[high] > element){
// 		// cout << low << " " << v[low] << endl;	
// 		return high;
// 	}
		
// 	return -1;

// }

// int main() {
// 	vector<int> v;
// 	int n, x, element;
// 	cin >> n;
// 	cin >> element;


// 	for (int i = 0; i < n; i++) {
// 		cin >> x;
// 		v.push_back(x);
// 	}

// 	cout << upper_bound(v, element);
// }