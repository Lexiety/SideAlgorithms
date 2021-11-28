#include <iostream>

using namespace std;
int main()
{
	float a, b,c ;
	cin >> a>>b;
	
	while (b == 0)
	{
		cout << "Please enter a new diveder" << endl;
		cin >> b;
	}
	c = a / b;
	cout << c;
	
	return 0;
}