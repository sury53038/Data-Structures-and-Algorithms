#include<iostream>
using namespace std;

int power(int a, int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return a;
    }
    int ans = power(a, n/2);

    if(n % 2 == 0){
        return (ans*ans);
    }
    else{
        return (a * ans * ans);
    }
} 

int main(){

    int a, n;
    cout<<"No and power :: "<<endl;
    cin>>a>>n;
    int ans = power(a, n);
    cout<<"Answer is "<<ans;

    return 0;
}