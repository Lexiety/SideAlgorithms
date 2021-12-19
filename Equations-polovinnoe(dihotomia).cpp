#include <iostream>
#include <math.h>

using namespace std;

double f(double x)
{
	return x*x-5*x+6;
}

int main()
{
	double a, b, c, E;
	a = b = E = 0.0;
	cin >> a;
	cin >> b;
	cin >> E;
	c = 0.0;
	while ((b - a) / 2 > E)
	{
		c = (a + b) / 2;
		if (f(c) == 0.0) { break; }
		if (f(a) * f(c) < 0) { b = c; }
		else { a = c; }
	}
	cout << "ROOT=" << c;
	return 0;
}