#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
	int temp;
	for (int i = 0; i < n-1 ; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

//By harsh kumar 2010991561