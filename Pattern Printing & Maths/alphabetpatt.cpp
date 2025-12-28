#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;
    i=1;
    cout<<"enter the number of columns: ";
    cin>>n; 
    // char ch = 'A';
    while(i<=n){
        j=1;
        while(j<=i){
                
                   //cout<<(i+j-1)<<" ";
                   //...........
                   //char ch = 'A'+i-1;
                   //char ch = 'A'+i+j-2;
                   char ch = 'A'+j-i-1+n;
                   cout<<ch<<" ";
                //    ch++;
                   j++; 
        }
        cout<<endl;
        i++;
    }
    return 0;
}