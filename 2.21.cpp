#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int s,n;
	bool flag=true;
	
	cin >> n;
	s = n;
	while (n != 0)
	{
		cin >> n;
		if (s > n && n !=0) { flag = false; } 
		s = n;
	}
	cout << flag; 

	return 0;
}