#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 4, 4, 5, 6, 7};
    vector<int> count(9, 0);
    for (int i = 0; i < 8; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < 9; i++)
    {
        if (count[arr[i]] > 1)
        {
            cout << arr[i];
            
        }
    }
    return 0;
}