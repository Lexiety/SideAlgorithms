#include <iostream>

using namespace std;
int main()
{
	int i, n, max,min;
	int a[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	max = min =  a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max) { max = a[i];  }
		if (a[i] < min) { min = a[i]; }
		


	}
		cout << "MAX = "<< max << ", MIN = " << min;

	return 0;
}
