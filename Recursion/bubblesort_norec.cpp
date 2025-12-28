#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    int x = size;
    int flag;
    for(int i = 0; i < x-1; i++){
        flag = 0;
        for(int j = 0; j < x-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main(){

    int arr[6] = {12,87,11,81,34,8};

    bubblesort(arr, 6);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}