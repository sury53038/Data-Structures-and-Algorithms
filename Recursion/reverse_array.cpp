#include<iostream>
using namespace std;

void reverse(int arr[], int i, int j){
    if(i >= j) return;

    swap(arr[i], arr[j]);
    reverse(arr,++i, --j);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr,0, 6);
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}