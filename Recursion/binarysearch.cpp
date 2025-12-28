#include<iostream>
using namespace std;
bool binarysearch(int arr[], int s, int e, int key){
    for(int i = s; i <=e; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    if(s > e){
        return false;
    }
    else{
        int mid = s + (e-s)/2;
        cout<<"\nmid is :: "<<arr[mid]<<endl;
         if(arr[mid] == key)
        return true;

        else if(arr[mid] < key)
        return binarysearch(arr, mid+1, e, key);

        else if(arr[mid] > key)
        return binarysearch(arr, s, mid-1, key);
    }
}

int main(){

    int arr[] = {1,2,3,4,55,88,84,222};
    int size = 8;
    int key;
    cout<<"enter the key :: ";
    cin>>key;
    bool ans = binarysearch(arr, 0, size-1, key);
    cout<<ans;

    return 0;
}