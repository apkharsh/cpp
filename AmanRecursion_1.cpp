#include <bits/stdc++.h>
using namespace std;
void print(int n) {

	if (n == 0) {
		return;
	}
	// cout << n << " ";
	cout <<  n << " Jadoo ki jhappi" << endl;
	print(n - 1);

};

int main() {
	int n;
	cin >> n;
	print(n);

	return 0;
}