#include<iostream>
using namespace std;

int main(){
    int row,col,n,coutn=1;
    cin>>n;
    row=1;
    while(row<=n){
        col=1;
        while(col<=row){
           // cout<<"*"<<" ";
           //cout<<row<<" ";
           cout<<coutn<<" ";
           coutn++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}