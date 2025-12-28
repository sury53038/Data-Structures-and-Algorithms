#include<iostream>
using namespace std;

int main(){
    int k,i,j,l,m,n,o,p,q;
    i=1;o=1;
    m=1;
    cout<<"enter the number of rows: ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            cout<<"* ";
            j++;
        }
        k=1;
        while(k<=i){
            cout<<m<<" ";
            m++;
            k++;
        }
        l=1;
        while(l<=i){
            cout<<o<<" ";
            o++;
            l++;
        }
        p=1;
        while(p<=n-i+1){
            cout<<"* ";
            p++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}