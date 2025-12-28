#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    cout << "Enter eelments: ";
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int found = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if ((arr[i] ^ arr[j])==0)
            {
                continue;
            }
            else
            {
                found = arr[i];
            }
        }
    }
    cout<<"\n"<<found;
}