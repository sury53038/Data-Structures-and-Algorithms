#include<iostream>
#include<vector>
using namespace std;

int main(){
 
    int box[9];
    cout<<"enter the elements: ";
    int x=0,y,z;
    for(int i=0;i<9;i++){
        cin>>box[i];
    }
    for(int j=0;j<9;j++)
    {
        x = x^box[j];
    }
    cout<<endl<<x;

    return 0;
}