#include <iostream>

using namespace std;
int main()
{
	int a,b,c;
	double d,e;
	cin >> a>>b>>c;
	if (b * b - 4 * a * c < 0)
	{
		cout << "No roots";
	}
	if (b * b - 4 * a * c == 0)
	{
		cout << "1 root - ";
		cout << -b / (2 * a);
	}
	if (b* b - 4 * a * c > 0)
	{
	 d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	 e = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	 cout << "2 roots: " << d << " and " << e;
	}

	return 0;
}