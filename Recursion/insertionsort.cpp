#include<iostream>
using namespace std;
void insertionsort(int arr[], int size){
    
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i-1;

        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[6] = {23,53,22,0,1,34};
    cout<<"hello"<<endl;
    insertionsort(arr, 6);
    cout<<"sorted array is "<<endl;
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}