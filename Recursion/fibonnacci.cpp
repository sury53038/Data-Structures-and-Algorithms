#include<iostream>
using namespace std;
int fibo(int N){
    if(N == 0){
        return 0;
    }
    if(N == 1){
        return 1;
    }
    int ans = fibo(N-1) + fibo(N-2);
    return ans;
}

int main(){
    int x;
    cout<<"Enter the number to get fibonnacci series :: ";
    cin>>x;

    int asn = fibo(x);
    cout<<asn<<" ";

    return 0;
}