#include<bits/stdc++.h>
#define n 100
using namespace std;

class Queue{
    public:
    int *arr;
    int first;
    int last;

    Queue(){
        arr = new int [n];
        first = -1;
        last = -1;
    }

    void Push(int p){
        if(last == -1 && first == -1){
            first++;
            last++;
            arr[first] = p;
        }
        else if(last == n-1){
            cout<<"Overflow"<<endl;
            return;
        }
        else{
            last++;
            arr[last] = p;
        }
    }
    void Pop(){
        if(first == -1 && last == -1){
            return;
        }
        else if(first == last){
            first = last = -1;
        }
        else{
            first++;
        }
    }
    int Front(){
        return arr[first];
    }
    int Size(){
        return last-first+1;
    }
    bool Empty(){
        return ((first == -1 && last == -1) || (first == last));
    }
};


int main(){

    Queue k;
    
    k.Push(12);
    k.Push(8);
    k.Push(33);
    k.Push(32);
    cout<<k.Size()<<endl;
    k.Push(15);
    cout<<k.Size()<<endl;
    cout<<k.Front()<<endl;
    return 0;
}