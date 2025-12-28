#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    int y;
    int i=0;
    int ans=0;
    cout<<"Enter a number: ";
    cin>>x;
    while (x != 0)
    {
        y = x & 1;
        ans = (y * pow(10,i))+ ans;
        x = x>>1;
        i++;
    }
    cout<<"\nBinary form: "<<ans;
   return 0;
}