#include<iostream>
using namespace std;

int printingwave(int arr[][4],int a, int b){
    for(int i = 0; i<a;i++){
        if(i%2 != 0){
            for(int j = b-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j = 0; j<b;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int arr[4][4];
    cout<<"Enter matrix :: "<<endl;
    for(int i = 0; i<4;i++){
        for(int j = 0; j< 4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i = 0; i<4;i++){
        for(int j = 0; j< 4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    printingwave(arr, 4,4);

    return 0;
}