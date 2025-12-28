#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1, sum = 0;
    int limit;
    cout<<"Enter the limit :: ";
    cin>>limit;
    cout<<"\n"<<a<<" "<<b;
    for(int i = 0; i<limit; i++){
        sum = a + b;
        a = b;
        b = sum;
        cout<<" "<<sum;
    }


    return 0;
}