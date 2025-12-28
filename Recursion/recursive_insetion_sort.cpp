#include<iostream>
using namespace std;

void shaurt(int arr[], int i, int size){
    int temp = arr[i], j = i-1;
    
    if(i == size) return;

    for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;

    shaurt(arr, i+1, size);
}

int main(){

    int arr[6] = {23,53,22,0,1,34};
    shaurt(arr, 0, 6);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}