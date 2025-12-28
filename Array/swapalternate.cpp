#include<iostream>
using namespace std;

void swapalter(int arr[], int size){
    int s =0, se=1;
    for(int i=0;i<(size/2);i++){
        swap(arr[s],arr[se]);
        s=s+2; se = se+2;
    }
    cout<<"After alternate swapping: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10];
    cout<<"enter 10 elements: ";
    for(int i=0; i<10;i++){
        cin>>arr[i];
    }
    swapalter(arr, 10);
    
    return 0;
}