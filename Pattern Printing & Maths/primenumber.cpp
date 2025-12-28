#include<iostream>
using namespace std;
int main(){

    int x,y,z;
    float m;
    cout<<"Enter number to check: ";
    cin>>x;
    bool isPrime = 1;
    for(int i=2;i<x;i++){
       if(x % i == 0){
       isPrime = 0;
       break;}
       }
    if(isPrime == 0){
        cout<<x<<" is non prime.";
    }
    else{
        cout<<x<<" is prime.";
    }
    return 0;
}