#include<iostream>
using namespace std;


int main(){

    int x;
    cout<<"Enter the number of rows :: ";
    cin>>x;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int k = 0; k < 2*x-(2*i+1); k++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}