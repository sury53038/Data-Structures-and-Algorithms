// unique element.
#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[5] = {2, 4, 4, 2, 5};
    int x = findUnique(arr, 5);
    cout << x << endl;

    return 0;
}