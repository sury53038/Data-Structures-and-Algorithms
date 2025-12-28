#include<iostream>
using namespace std;
int fact(int N){
    if(N == 0)
    return 1;

    int num = N * fact(N-1);
    return num;
}
int main(){
    int n;
    cin>>n;

    cout<<fact(n);

    return 0;
}