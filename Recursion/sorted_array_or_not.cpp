#include<iostream>
using namespace std;
bool sortedorNot(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[size-1] < arr[size-2]){
        return false;
    }
    return sortedorNot(arr, size-1);
}

int main(){
    int arr[] = {4,5,5,6,7};
    int size = 5;

    bool ans = sortedorNot(arr, size);
    if(ans){
        cout<<"\narray is sorted"<<endl;
    }
    else{
        cout<<"\narray is not sorted";
    }
    return 0;
}