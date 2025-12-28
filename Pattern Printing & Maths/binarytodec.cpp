#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int p, q, r, s = 0, t, u;
    cout << "Enter a binary number: ";
    cin >> p;
    int ans = 0;
    while (p != 0)
    {
        t = p % 10;
        // if (t == 1)
        // {
        //     ans = ans + (pow(2, s));
        // }
        ans = ans + (t*pow(2,s));
        s++;
        p = p / 10;
    }
    cout << "Decimal: " << ans;
    return 0;
}