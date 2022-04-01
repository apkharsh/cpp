#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N];

void swap(int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}

int partition(int left, int right) {
	int pivot = arr[right];
	int i = left-1;

	for (int j = left; j < right; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(i, j);
		}
	}
	swap(i + 1, right);
	return i + 1;

}

// Trying another method for partition
int partition_2(int left, int right) {
	int pivot = arr[left];
	// arr[right] = INT_MAX;
	int i = left;
	int j = right;

	while (i < j) {
		if (arr[i] <= pivot) {
			i++;
			// continue;

		}
		if (arr[j] > pivot) {
			j--;
			// continue;
		}

		swap(i, j);
	}
	swap(pivot, j);

	return pivot;
}

void quickSort(int left, int right) {
	if (left < right) {
		int pi = partition(left, right);
		quickSort(left, pi - 1);
		quickSort(pi + 1, right);
	}
}

int main() {
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	quickSort(0, size - 1);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}

// Submitted by apkharsh