#include <bits/stdc++.h>
using namespace std;



int main()
{
	int a, b, max;


	cin >> a >> b;

	if (a > b) {
		max = a;

	}
	else
		max = b;
	for (int n = 1; n < max; n++) {
		if (n % a == 0 && n % b == 0) {
			cout << max;
			break;
		}
	}
	return 0;


}


// unsigned int russianPeasant(unsigned int a, unsigned int b)
// {
// 	int res = 0;
// 	while (b > 0)
// 	{
// 		if (b & 1)
// 			res = res + a;

// 		a = a << 1;
// 		b = b >> 1;
// 	}
// 	return res;
// }

// int main()
// {
// 	cout << russianPeasant(18, 1) << endl;
// 	cout << russianPeasant(20, 12) << endl;
// 	return 0;
// }
