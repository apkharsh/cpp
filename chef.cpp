#include <bits/stdc++.h>
using namespace std;

//selection sort

// int selectionSort(int *arr){
    
// }
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_index = arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i] < min_index){
        min_index = arr[i];
        }
    }
    

    cout << min_index << endl;

    return 0;
}

// Submitted by apkharsh