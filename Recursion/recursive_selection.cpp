#include<iostream>
using namespace std;

void select_shaurt(int arr[], int i, int size){
    if(i == size) return;
    int j = 0;

    for(; j < size; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    select_shaurt(arr, i+1, size);
}


int main(){

    int arr[6] = {11,2,202,53,0,45};

    select_shaurt(arr, 0, 6);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}