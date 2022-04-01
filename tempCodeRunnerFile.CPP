// write an code to implement merge sort

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[10];

void mergeSort(int left, int right, int mid)
{
	int l_size = mid - left + 1;
	int r_size = right - mid;
	int l[l_size], r[r_size];

	// left and right array me input lelia main array se.
	for (int i = 0; i < l_size; i++){
		l[i] = arr[left + i];
	}

	for(int i = 0; i < r_size; i++){
		r[i] = arr[mid + 1 + i];
	}

	// new left and right arrays me iterate karne ke lie i and j variables bnadie and k variable main array me iterate karne ke lie.

	int i = 0, j = 0, k = left;

	for(int i = left; i < right; right++){
		if(l[i] <= r[j]){
			arr[k] = l[i];
			i++;
		}
		else{
			arr[k] = r[j];
			j++;
		}
		k++;
	}		
}

void merge(int left, int right){
	int mid = (left + right) / 2;
	if(left < right){
		merge(left, mid);
		merge(mid + 1, right);
		mergeSort(left, right, mid);
	}
}

int main()
{
	/*Write your code here*/
	int size;
	cin >> size;
	for(int i = 0; i< size; i++){
		cin >> arr[i];
	}

	merge(0, size);

	for(int i = 0; i< size; i++){
		cout << arr[i];
	}
	return 0;
}