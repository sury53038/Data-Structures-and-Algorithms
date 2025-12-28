#include<iostream>
using namespace std;

int main(){

    cout<<"enter the number of cols :: ";
    int x;
    cin>>x;
    for(int i = 0;  i < x; i++){
        for(int j = 0; j <= x-i-1; j++){
            cout<<" ";
        }
        for(int k = 0; k < i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    int p = x-1;
    for(int i = 0; i < p; i++){
        for(int j = 0; j < i+1; j++){
            cout<<" ";
        }
        for(int k = 0; k < i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}