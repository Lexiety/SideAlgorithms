#include <iostream>

using namespace std;
int main()
{
	int n, i, j, max;
	cin >> n;

	cin >> j;
	max = j;
	for (i = 2; i <= n; i++)
	{

		cin >> j;
		if (j > max)
		{
			max = j;
		}

	}
	cout << max << "  -  maximum";

	return 0;
}