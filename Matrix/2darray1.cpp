/*print row wise sum*/


#include<iostream>
using namespace std;

int main(){
    int arr[4][4];
    for(int row = 0;row<4;row++){
        for(int col = 0; col<4;col++){
            cin>>arr[row][col];
        }
    }

    cout<<"Entered matrix is :: "<<endl;
    for(int row = 0;row<4;row++){
        int rowsum = 0;
        cout<<endl;
        for(int col = 0; col<4;col++){
            cout<<arr[row][col]<<" ";
            rowsum = rowsum + arr[row][col];
        }
        cout<<" | "<<rowsum;
    }
    
    return 0;
}