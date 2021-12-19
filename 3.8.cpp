#include <iostream>

using namespace std;
int main()
{
	int i, n, m;
	int a[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < (n / 2); i++)
	{
		m = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = m;

	}

	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";

	}
	return 0;
}
