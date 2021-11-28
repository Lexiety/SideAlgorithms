#include <iostream>

using namespace std;
int main()
{
	int i,n,c,sum;
	cin >> n;
	c = 1;
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		c = c * (-1);
		sum += c;
	}
	cout << sum;
	return 0;
}