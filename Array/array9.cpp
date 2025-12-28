// swap alternate.
#include <iostream>
using namespace std;
// void swapAlternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }
// void printArray(int arr[], int s)
// {
//     for (int i = 0; i < s; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int even[8] = {2, 5, 6, 8, 7, 9, 1, 3};
//     int odd[7] = {1, 2, 3, 4, 5, 6, 7};

//     swapAlternate(even, 8);
//     printArray(even, 8);

//     swapAlternate(odd, 7);
//     printArray(odd, 7);
//.................................................................
void swapAlter(int arr[], int size)
{
    int i, temp;
    for (i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[4] = {1, 2, 3, 5};
    swapAlter(arr, 4);
    printArray(arr, 4);
    return 0;
}