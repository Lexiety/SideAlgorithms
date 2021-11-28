#include <iostream>

using namespace std;
int main()
{
	int i, n, sum, j, a;
	cin >> n;
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		a = 1;
		for (j = 1; j <= i + 1; j++)
		{
			a = a * (i + j - 1);
		}
		sum += a;
	}
	cout << sum;
	return 0;
}