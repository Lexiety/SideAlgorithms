#include <iostream>
#include <cmath>

using namespace std;

// f(x) = x^2-5x+6
// f'(x) = 2x-5
// interval - [0.5, 2.5]

int main()
{
    double x, xPrev;
    double lambda = 0.1; // r = max(|f'(a)|, |f'(b)|)     r = max(|f'(0)|, |f'(2.5)|)  r = max(5, 0) r=5
                           // -1/r < λ < 0, если f'(x) > 0
                           // 0 < λ < 1/r, если f'(x) < 0
    x = 1; // any number in the interval
    xPrev = 0; //must be less than any number from the interval
    double E = 0.000001;

    while (abs(x - xPrev) > E)
    {
        xPrev = x;
        x = lambda * (xPrev * xPrev - xPrev * 5 + 6) + xPrev;    // ф(x) = x + λ(x*x - 5x + 6)
    }
    cout << "Root =  " << x << endl;
    return 0;
}
