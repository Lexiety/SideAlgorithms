#include <iostream>

using namespace std;
int main()

{
	int i, n, j, min, k;
	int a[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	for (i = 0; i < n - 1; i++) // n-1??????
	{
		min = a[i];
		for (j = i; j < n; j++)
		{
			if (a[j] < min) { min = a[j]; k = a[j]; a[j] = a[i]; a[i] = k; }

		}
	}

	for (i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	return 0;
}
