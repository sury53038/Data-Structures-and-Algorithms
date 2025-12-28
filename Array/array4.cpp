#include <iostream>
using namespace std;
int main()
{
    int i, j, k, sum = 0, arr[7];
    cout << "Enter the values in the table: ";
    for (i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 7; i++)
    {
        sum += arr[i];
    }
    cout << "\nSum of entered values: ";
    cout << sum;

    return 0;
}