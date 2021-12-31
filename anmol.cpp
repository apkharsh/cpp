#include <bits/stdc++.h>
using namespace std;
// 0 1 1 2 3 5 8
int fibo(int n) {
	if (n <= 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);


}

int main() {
	int n;
	cin >> n;

	cout << fibo(n) << " ";

}





// Given 6 balls in over batsman is able to score 18 runs how many combinations are ailable such that ( ball can be suck or person can score 1,2,4,6 runs)

















// int k;
// void print(int n, int m) {
// 	if (m > k) {
// 		return;
// 	}
// 	cout << n*m << endl;
// 	print(n, m + 1);
// }
// int main() {

// 	int n, m;
// 	cin >> n >> m >> k;

// 	print(n, m);
// 	return 0;
// }



















// #include <iostream>
// using namespace std;

// void print(int n) {
// 	if (x = 100) {
// 		return;
// 	}
// 	cout << x << endl;

// 	print(x + 1);
// }


// int main()
// {
// 	int x;
// 	cin >> x;
// 	print(x);
// 	return 0;
// }