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


    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}