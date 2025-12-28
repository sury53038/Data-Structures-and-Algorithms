#include<iostream>
using namespace std;
int main(){
    int row,col,value,n;
    cin>>n;
    row = 1;
    while(row<=n){
        col=1;
        value=row;
        while(col<=row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}