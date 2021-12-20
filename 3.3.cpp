#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, n, j, min, k;
    int a[50];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    for (i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}