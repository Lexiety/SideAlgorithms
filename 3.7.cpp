#include <iostream>

using namespace std;
int main()
{
	int i, n;
	bool flag = true;
	int a[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1]) { flag = false; }
	
	}
		cout << flag;

	return 0;
}
