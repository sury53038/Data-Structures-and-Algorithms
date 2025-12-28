#include <iostream>
using namespace std;

int main()
{
    int p;
    cout << "Enter limit: ";
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int x = 3;
    for (int i = 1; i <= p ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * p - x; k++)
        {
            cout << "*";
        }
        x = x + 2;
        cout << endl;
    }
    return 0;
}
