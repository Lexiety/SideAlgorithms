#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int n,m1,m2;
	double a,max1;
	cin >> n;
	a = 0.0;
	m1 = 0;
	max1 = 0.0;

	for (int i=0; i<=1000; i++)
	{
		a = cos(2*n + i);
		if (a > max1) { max1 = a; m1 = 0; }
		if (a = max1) { m1 += 1; }
		
	}
	 cout << "MAX = " << max1 << ", amount = " << m1 <<  endl;
	return 0;
}