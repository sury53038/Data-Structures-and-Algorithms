#include<iostream>
using namespace std;

void reversearr(int arr[], int size){
    int start = 0, end  = size-1;
    for(int i=0;i<(size/2);i++){
        swap(arr[start], arr[end]);
        start++; end--;
    }
    cout<<"reversed array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[10];
    cout<<"enter 10 element: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    reversearr(arr, 10);
    return 0;
}