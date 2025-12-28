#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1; 
    }
        int chhotu = factorial(n-1);
        int bada = n*chhotu;
    return bada;
}

int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans;


    return 0;
}