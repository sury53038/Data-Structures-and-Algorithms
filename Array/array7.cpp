//reverse of an array.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    int arr[5];
    cout<<"Enter 5 numbers: ";
    for(y=0;y<5;y++)
    {
        cin>>arr[y];
    }
    for(x=4;x>=0;x--)
    {
        cout<<arr[x]<<" ";
    }

    return 0;
}