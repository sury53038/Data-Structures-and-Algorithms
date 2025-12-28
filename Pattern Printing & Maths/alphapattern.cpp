#include<iostream>
using namespace std;

int main(){
    int j,i,k,l;
    cin>>l;
    i=1;
    
    while(i<=l){
        j=1;
        
        while(j<=l){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}