#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number of rows :: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = n-i-1; j >= 0; j--){
            cout<<" ";
        }
        for(int k = 0; k < 2*i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j <= i+1; j++){
            cout<<" ";
        }
        for(int k = 0; k < 2*(n-i-1)-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}