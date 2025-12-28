#include<iostream>
using namespace std;
int sumofele(int arr[], int size){
    int sum =  0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[10];
    cout<<"Enter 10 elements: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int s = sumofele(arr, 10);
    cout<<"\nSum of elements: "<<s;
    return 0;
}