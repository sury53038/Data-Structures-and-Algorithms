#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int dec,bit,digit,ans=0;
    cout<<"Enter number to convert: ";
    cin>>dec;
    int i=0;
    while(dec != 0){
        bit = dec & 1;
        ans = (bit * pow(10, i) + ans);
        dec = dec>>1;
        i++;
    }   

    cout<<"\nBinary form: 000"<<ans;
    return 0;
}