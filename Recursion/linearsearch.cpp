#include<iostream>
using namespace std;

bool findKey(int arr[], int size, int target){
    if(size == 0){
        return false;
    }
    // else if(size == 1 && arr[0] == target){
    //     return true;
    // }
    else if(arr[0] == target){
        return true;
    }
    // bool ans = (arr[size] == target);
    return findKey(arr+1, size-1, target);
    // return ans;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int key, size = 8;
    cout<<"Enter the key to find :: "<<endl;
    cin>>key;
    bool x = findKey(arr, size, key);
    if(x){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false";
    }
    return 0;
}