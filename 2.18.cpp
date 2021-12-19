#include <iostream>

using namespace std;
int main()
{
	int s,n;
	cin >> n;
	s = 0;
	while (n>0)
	{
		s = s * 10 + n % 10;
		n = n / 10;
	}
	cout << s;
	return 0;
}