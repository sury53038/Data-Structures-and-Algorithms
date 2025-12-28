//calculate the sum of all the elements int the given array.
#include<iostream>
using namespace std;
int main(){
    int array[]={3,5,10,4},i;
    int sum = 0;
    int size=sizeof(array)/sizeof(array[1]);
    for(i=0;i<size;i++){
        sum=sum+array[i];
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}