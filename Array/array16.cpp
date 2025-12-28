// first and last position of an element in an array.
#include <iostream>
#include <vector>
using namespace std;
int findPosition(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int pos1, pos2;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] == key)
        {
            pos2 = mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
}

int main()
{
    int array[6];
    cout<<"Enter the elements: ";
    for(int i=1;i<=6;i++){
        cin>>array[i];
    }
    // int k;
    // cout<<"\nEnter the key: ";
    // cin>>k;
    cout<<"The first occurance of 4 : "
    <<findPosition(array, 6, 4);
    return 0;
}