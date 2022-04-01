#include <iostream>
using namespace std;
int main()
{
	int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
	cin >> r;
	cin >> c;

	// For taking input in matrix 1
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}

	// For taking input in matrix 2
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cin >> b[i][j];
		}
	}

	// For multiplying two matrix
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			mul[i][j] = 0;
			for (k = 0; k < c; k++)
			{
				mul[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	//for printing result
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cout << mul[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}