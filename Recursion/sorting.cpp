#include<iostream>
using namespace std;

void sorting(int arr[], int size){
    int i = 0, j = size-1;
    for(int i = 0; i < size; i++){
        j = i+1;
        for(; j < size; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main(){

    int arr[6] = {10,2,33,5,23,11};

    sorting(arr, 6);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}