#include <iostream>

using namespace std;
int main()
{
	int sum,n;
	cin >> n;
	sum = 0;
	for (int i=1; i<=n; i++)
	{
		sum += i;
	}
	
	cout << sum;
	
	return 0;
}