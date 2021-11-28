#include <iostream>

using namespace std;
int main()
{
	int i, n;
	float a, b, y;
	cin >> n;
	float x = 4.0;
	y = 1.0;
	a = b = y;
	for (i = 1; i <= n - 1; i++)
	{
		a = a * i;
		b = b * x;
		y = y + b / a;
	}
	cout << y;
	return 0;
}