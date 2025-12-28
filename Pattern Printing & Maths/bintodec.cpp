#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int y;
    int x;
    int digit;
    int ans = 0;
    int i = 0;
    cout << "Enter a binary number: ";
    cin >> x;
    while (x != 0)
    {
        digit = x % 10;
        ans = digit * pow(2, i) + ans;
        digit = digit / 10;
        i++;
    }
    cout << "Decimal form : " << ans;
    return 0;
}