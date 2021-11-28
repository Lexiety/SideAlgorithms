#include <iostream>

using namespace std;
int main()
{
	int n, i, j, max, min;
	cin >> n;

	cin >> j;
	max = j;
	min = j;
	for (i = 2; i <= n; i++)
	{

		cin >> j;
		if (j > max)
		{
			max = j;
		}

		if (j < min)
		{
			min = j;
		}

	}
	cout << min+max << "  - summa";


	return 0;
}