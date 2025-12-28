#include<iostream>
using namespace std;
int main(){

    int a=0;
    int b=1;
    int limit;
    cout<<"Enter limit: ";
    cin>>limit;
    int nextNum;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=limit;i++){
        nextNum=(a+b);
        cout<<nextNum<<" ";
        a=b;
        b=nextNum;
    }
    return 0;
}