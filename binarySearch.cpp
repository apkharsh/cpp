#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key) {

}

int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int key;
	cin >> key;


	int high = n-1;
	int low = 0;

	while ((high - low) > 1) {
		int mid = (high + low) / 2;
		if (arr[mid] < key) {
			low = mid + 1;
		}
		else {
			high = mid;
		}
	}
	if (arr[low] == key) {
		cout << low;
	}
	else if (arr[high] == key) {
		return high;
	}
	else cout << "Not Found";
	// cout << binarySearch(arr, n, key);

}