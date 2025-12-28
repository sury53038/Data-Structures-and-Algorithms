#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Enter a number: ";
    cin>>x;
    int sum = 0;
    int pdct = 1;

    while(x != 0){
        y = x % 10;
        pdct = pdct*y;
        sum = sum+y;

        x = x/10;
    }
    cout<<"product of digits is "<<pdct<<" and sum of digits is "<<sum;
    cout<<"\ndifference of sum and product is : "<<pdct-sum;
    return 0;
}