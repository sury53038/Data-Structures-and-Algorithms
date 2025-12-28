#include<iostream>
using namespace std;

int main(){
    int n,j;
    cin>>n;
    int i = 1;
    int k=1;
    while(i<=n){
        j=1;
        while(j<=n){
           // cout<<j<<" ";
           //cout<<n-j+1<<" ";
           cout<<k<<"   ";
           k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}