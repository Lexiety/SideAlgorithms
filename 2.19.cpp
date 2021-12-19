#include <iostream>

using namespace std;
int main()
{
	int s,n;
	cin >> n;
	s = 0;
	for (int i=1; i<=n; i++)
	{
		if (i % 3 == 0) { s = s - i; }
		if (i % 3 != 0) { s = s + i; }
	}
	cout << s;
	return 0;
}