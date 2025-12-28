#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot= arr[low];
    int s = low+1;
    int e = high;
    while(s <= e){
        while(arr[s] < pivot)
        s++;

        while(arr[e] > pivot)
        e--;

        if(s < e)
        swap(arr[s], arr[e]);
    }
    swap(arr[low], arr[e]);
    return e;
}

void quicksort(int arr[], int low, int high){
    if(low >= high){
        return;
    }
    int part = partition(arr, low, high);
    quicksort(arr, low, part);
    quicksort(arr, part+1, high);
}

int main(){
    int x;
    cout<<"Enter the size of array :: ";
    cin>>x;

    int* arr = new int[x];
    for(int i = 0; i < x; i++){
        cin>> arr[i];
    }
    quicksort(arr, 0, x-1);
    cout<<"\n\n";
    for(int i = 0; i < x; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}