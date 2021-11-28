#include <iostream>

using namespace std;
int main()
{
	int s,n;
	cin >> n;
	s = 1;
	for (int i=1; i<=n; i++)
	{
		s = s*i;
	}
	cout << s;
	return 0;
}