#include <iostream>

using namespace std;
int main()
{
	int i, n, max;
	int a[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	max = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max) { max = a[i]; }

	}
		cout << max ;

	return 0;
}
