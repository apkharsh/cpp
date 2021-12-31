#include<bits/stdc++.h>
using namespace std;
struct node
{
public:
	int lund_ka_size;
	node *lund;
};

int main()
{
	node *papa = new node;
	node *child;
	node *escort;
	int lund_ka_size;

	if (papa->lund_ka_size == 0)
	{
		cout << "\nLund ka size dena padega... :";
		cin >> papa->lund_ka_size;
		papa->lund = NULL;
	}
	lund_ka_size = 1;
	while (lund_ka_size != -1)
	{

		cin >> lund_ka_size;
		escort = papa;
		while (escort->lund != 0)
		{
			escort = escort->lund;
		}
		child = new node;
		child->lund_ka_size = lund_ka_size;
		escort->lund = child;

	}

	node *dikha = papa;
	while (dikha != NULL)
	{
		cout << dikha->lund_ka_size << "\t";
		dikha = dikha->lund;
	}
	return 0;
}