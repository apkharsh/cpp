#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
// globally ek aray declare kardia h taki function me bar bar pass na karna pade
int arr[N];

// merge function hmari badi array ko chote parts me divide kar rha h taki hum badme sort krke elements ko merge karke vapas bada array bnade
void merge(int left, int right, int mid) {
	int l_size = mid - left + 1;
	int r_size = right - mid;
	// left or right array ke size me +1 islie kia h taaki last index pe INT_MAx dal ske and usse baki sare elements compare krke new array me dal denge.... individual conditions nahi lgani padengi right or left array me ki vo empty h ki nahi because sare elements INT_MAX se chote hi honge
	int leftArray[l_size + 1];
	int rightArray[r_size + 1];

	// main array ka left half new array me store kara h yha
	for (int i = 0; i < l_size; i++) {
		leftArray[i] = arr[left + i];
	}
	// main array ka right halk new array me store kara h yha
	for (int i = 0; i < r_size; i++) {
		rightArray[i] = arr[mid + i + 1];
	}

	// left or right dono element ke last me INT_MAX daldia h taaki ek single smaller than vali ondition lgake arrray sort kar ske
	leftArray[l_size] = rightArray[r_size] = INT_MAX;

	int l_i = 0; int r_i = 0;

	// l_i and r_i left and right array me iterate karne ke lie h

	for (int i = left; i <= right ; i++) {
		if (leftArray[l_i] <= rightArray[r_i]) {
			arr[i] = leftArray[l_i];
			l_i++;
		}
		else {
			arr[i] = rightArray[r_i];
			r_i++;
		}
	}
}


void mergeSort(int left, int right) {
	if (left == right) return;

	int mid = (left + right) / 2;
	mergeSort(left, mid);
	mergeSort(mid + 1, right);
	merge(left, right, mid);

}


int main() {
	int size;
	cin >> size;
	for (int i = 0 ; i < size; i++) {
		cin >> arr[i];
	}

	// merge sort ke function me 0 pass kia h left me kyuki left value vha h and right value size-1 index pe h islie range 0 se size-1 daali h sort karne ki
	mergeSort(0, size-1);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}