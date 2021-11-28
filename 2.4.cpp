#include <iostream>

using namespace std;
int main()
{
	int i, n, j,k;
	cin >> n;
	for (i = 1; i <= n/2+1; i++)
	{
		for (j = n/2; j >= i ; j--)
		{
			cout << "  ";
		}
		for (k = 1; k <= i*2-1; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}