#include <iostream>

using namespace std;
int main()
{
    int n, i, j;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)

        {
            cout << "  ";
        }
        for (int j = n - i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}