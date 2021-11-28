#include <iostream>

using namespace std;
int main()
{
	int n, i, j;
	cout << "Please enter a square number"<< endl;
	cin >> i;
	n = sqrt(i);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}