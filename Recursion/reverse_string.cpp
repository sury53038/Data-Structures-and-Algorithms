#include<iostream>
using namespace std;
void reversestr(string &arr,int i, int j){
    if(i > j)
    return;

    swap(arr[i], arr[j]);
    reversestr(arr,++i, --j); 
}
int main(){

    string name = "abccl";
    int size = name.length();
    cout<<"\nSize of string is :: "<<size<<endl;
    reversestr(name, 0, size-1);
    cout<<name;
    return 0;
}