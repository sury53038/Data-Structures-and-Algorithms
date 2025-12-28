// intersection of elements;
#include <iostream>
// #include<cstdio>
using namespace std;
// void intersectionElements(int arr[], int size){

// }

int main()
{

    int arr1[5] = {1, 2, 3, 5, 4};
    int arr2[6] = {1, 2, 3, 5, 6, 4};

    for (int i = 0; i < 5; i++)
    {
        int x = arr1[i];
        for (int j = 0; j < 6; j++)
        {
            if (x == arr2[j])
            {
              cout << arr2[j] << " ";
                arr2[j] = -34567;
            }
        }
    }
    cout << endl;

    return 0;
}