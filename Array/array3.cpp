// find the maximum value out of all the elements in an array;
#include <iostream>
using namespace std;
int main()
{
    int array[] = {3, 5, 6, 8, 99, 88};
    int max = array[0];
    for (int i = 0; i <= 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max << endl;
    return 0;
}