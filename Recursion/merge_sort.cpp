#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int k = low;

    int L[n1] = {0}, R[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[k++];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[k++];
    }

    int i = 0, j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k++] = R[j++];
        }
        else if (R[j] >= L[i])
        {
            arr[k++] = L[i++];
        }
    }
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}
void mergesort(int arr[], int i, int j)
{
    if(i < j)
    {
        int mid = i + (j - i) / 2;
        mergesort(arr, i, mid);
        mergesort(arr, mid + 1, j);
        merge(arr, i, mid, j);
    }
}

int main()
{

    int arr[6] = {11, 4, 9, 2, 0, 100};
    mergesort(arr, 0, 5);
    for (int l = 0; l < 6; l++)
    {
        cout << arr[l] << " ";
    }
    return 0;
}