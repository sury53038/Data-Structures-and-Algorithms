#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    int size;
    Node *top;

    public:
    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int val){
        Node *temp = new Node(val);
        temp->next = top;
        top = temp;
        size++;
    }
    void peek(){
        if(top == NULL){
            cout<<"\nEmpty Stack.";
            return;
        }
        else{
            cout<<top->data<<endl;
        }
    }
    void pop(){
        if(top == NULL){
            cout<<"\nStack Underflow."<<endl;
        }
        else{
            Node *curr = top;
            top = top->next;
            delete curr;
        }
    }
    void display(){
        Node *curr = top;
        while(curr != NULL){
            cout<<curr->data<<endl;
            curr = curr->next;
        }
    }
};

int main(){

Stack st;
for(int i = 0; i < 10; i++){
st.push(5+i);
}
st.display();
cout<<endl;
st.pop();
st.display();
cout<<endl;
st.peek();
return 0;
}