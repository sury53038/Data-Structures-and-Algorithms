#include<iostream>
using namespace std;

int main(){
    int i,j,k,l,n;
    i=1;
    cout<<"enter the number of columns: ";
    cin>>n;
    // while(i<=n){
    //     j=1;
    //     while(j<=n-i){
    //         cout<<" "<<" ";
    //         j++;
    //     }
    //     j=1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // ...........................
    // while(i<=n){
    //     j=1;
    //     while(j<=n-i+1){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;    
    // }
    // ............................
    while(i<=n){
        j=1;
        while(j<=i-1){
            cout<<" "<<" ";
            j++;
        }
        k=1;
        while(k<=n-i+1){
            cout<<"* ";
            k++;
        }
        cout<<endl;
        i++;
    }   
    return 0;
}