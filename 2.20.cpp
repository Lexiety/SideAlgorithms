#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int s,n;
	double a,z;
	cin >> n;
	cin >> z;
	a = 0.0;
	for (int i=0; i<=1000; i++)
	{
		a = sin(n + i / n);
		if (a == z) { cout << "YES using i="<< i<< endl; }
	}

	return 0;
}