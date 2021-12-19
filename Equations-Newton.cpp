#include <iostream>
#include <cmath>

using namespace std;

// f(x) = x^2-5x+6
// f'(x) = 2x-5
// f''(x) = 2
// interval - [0.5, 2.5]
// f(0.5) * f''(0.5) = (0.25-2.5+6)*2>0
// f(2.5) * f''(2.5) =(6.25-12.5+6)*2<0
//  => x0=a=
// x=0.5

int main()
{
    double x, xPrev;
    double lambda = 0.1;    // r = max(|f'(a)|, |f'(b)|)     r = max(|f'(0)|, |f'(2.5)|)  r = max(5, 0) r=5
                            // -1/r < λ < 0, если f'(x) > 0
                            // 0 < λ < 1/r, если f'(x) < 0
    x = 0.5;                // a or b => differs on count
    xPrev = 0;              //must be less than any number from the interval
    double E = 0.000001;

    while (abs(x - xPrev) > E)
    {
        xPrev = x;

        x = xPrev - (xPrev * xPrev - xPrev * 5 + 6) / (2 * xPrev - 5); // x = xPrev - ( f(x) / f'(x) )
    }
        cout << "Root =  " << x << endl;
    return 0;
}
