#include<bits/stdc++.h>
#define n 100
using namespace std;

class node{
    public:
    int data;
    node *ptr;

    node(int x){
        data = x;
        ptr = NULL;
    }
};

class Queue{
    public:
    node*front;
    node *rear;

    Queue(){
        front = rear = NULL;
    }
    bool isEmpty(){
        return (front == NULL);
    }

    void Push(int a){
        if(isEmpty()){
            front = new node(a);
            rear = front;
        }
        else{
            node *tmp = new node(a);
            rear->ptr = tmp;
            rear = rear->ptr;
        }
    }
    void Pop(){
        if(isEmpty()){
            cout<<"Underflow."<<endl;
            return;
        }
        else{
            node *temp = front;
            front = front->ptr;
            delete temp;
        }
    }
    int Front(){
        if(isEmpty()){
            cout<<"Underflow."<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
    int Size() {
        int count = 0;
        node *temp = front;
    
        while (temp != NULL) {
            count++;
            temp = temp->ptr;
        }
        return count;
    }
};


int main(){


    Queue ku;
    ku.Push(14);
    ku.Push(0);
    cout<<ku.Front()<<endl;
    cout<<"Size: "<<ku.Size()<<endl;
    ku.Pop();
    ku.Pop();
    cout<<ku.Front()<<endl;
    
    return 0;
}