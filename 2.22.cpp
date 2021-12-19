#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int n,m1,m2;
	double a,max1,max2;
	cin >> n;
	a = 0.0;
	m1 = m2 = 0;
	max1 = max2 = 0.0;

	for (int i=0; i<=1000; i++)
	{
		a = sin(n + i / n);
		if (a > max1) { max1 = a; m1 = i; }
		if (max1>max2) { max2 = max1; m2 = m1; }
		if (max2 = a) { m2 = i; }
	}
	if (m1 == m2) { cout << "MAX = " << max1 << ", number " << m1 << endl; }
	if (m1 != m2) { cout << "MAX = " << max1 << ", numbers " << m1 << " and " << m2<< endl; }
	return 0;
}