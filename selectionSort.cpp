#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[] , int n) {
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
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
    selectionsort(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

}