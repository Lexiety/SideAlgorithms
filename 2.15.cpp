#include <iostream>

using namespace std;
int main()
{
	int c,n,z;
	cin >> n >> z;
	while (n>0)
	{ 
		c = n % 10;
		if (c==z)
		{
			cout << "YES"; break;
		}
		n = n / 10;
	}
	if (c!=z)
	{
		cout << "NO";
	}
	return 0;
}