// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	int a[n];

// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}

// 	sort(arr, arr + n);

// 	for (int i = 0 ; i < n; i++) {
// 		cout << arr[i] << endl;
// 	}

// 	int *ptr = lower_bound(a, a + n, 5);
// 	if(ptr = (a+n)){
// 		cout << "Not found" << endl;
// 	}
// 	cout << *ptr << endl;


// 	return 0;
// }

// Submitted by apkharsh

// We can do the same thing with vectors

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
    	cin >> a[i];
    }

    sort(a.begin(), a.end());
    for(int i=0; i<n;i++){
    	cout << a[i] << " ";
    }
    cout << endl;

    auto it = upper_bound(a.begin(), a.end(), 5);
    if(it==a.end()){
    	cout << "Not found" << endl;
    }

    cout << (*it) << endl;


    return 0;
}

// Submitted by apkharsh