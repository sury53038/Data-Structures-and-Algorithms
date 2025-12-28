#include<iostream>
using namespace std;

bool findele(int arr[], int size, int key){
    int i;
    for(i=0;i<size;i++){
        if(arr[i] == key){
            cout<<"element found at position "<<i+1<<endl;
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    bool result = findele(arr, 10, key);
    if(!result){
       cout<<"no matching element found.";
    }
    return 0;
}