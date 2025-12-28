#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :: ";
    cin >>n;

    int x = n/2 + 1;
    int y = n/2;
    for(int i = 0; i < x; i++){
        for(int k = 0; k < i; k++){
            cout<<" ";
        }
        for(int j = 0; j < (n - i*2); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < y; i++){
        for(int k = y-i-1; k > 0; k--){
            cout<<" ";
        }
        for(int j = 0; j < ((i+1)*2+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}