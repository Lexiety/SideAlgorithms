#include <iostream>

using namespace std;
int main()
{
	int i, n, max,m;
	int a[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	max = a[0]; m = 1;
	for (i = 1; i < n; i++)
	{
		if (a[i] == max) { m += 1; }
		if (a[i] > max) { max = a[i]; m = 1; }
		


	}
		cout << "MAX = "<< max << ", AMOUNT = " << m;

	return 0;
}
