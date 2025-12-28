#include<iostream>
using namespace std;

void sortrecursive(int arr[], int size){
    if(size == 0) return;

    for(int i = 0; i < size-1; i++){
        if(arr[i+1] < arr[i]){
            swap(arr[i+1] , arr[i]);
        }
    }
    sortrecursive(arr, size-1);
}

int main(){

    int arr[10] = {44,-1,99,35232,61,20,3,0,88,23};

    sortrecursive(arr, 10);

    for(int i = 0; i < 10; i++){
        cout<<arr[i] <<" ";
    }


    return 0;
}