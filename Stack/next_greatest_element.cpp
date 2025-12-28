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
    Node *top;
    int size;

    public:
    Stack(){
        top = NULL;
        size = 0;
    }
    int peek(){
        if(size == 0){
            return -1;
        }
        else{
            return top->data;
        }
    }
    void push(int val){
        Node *temp = new Node(val);
        temp->next = top;
        top = temp;
        size++;
    }
    void pop(){
        if(size == 0){
            return;
        }
        else{
            top = top->next;
        }
    }
    void display(){
        Node *curr = top;
        while(curr != NULL){
            cout<<curr->data<<endl;
            curr = curr->next;
        }
    }
    bool empty(){
        if(top == 0){
            return true;
        }
        else{
            return false;
        }
    }
};


int  main(){

Stack st;
vector<long long> arr = {1, 3, 2, 4};

int n = arr.size();
vector<long long> vec(n, -1);
for(int i = 0; i < n; i++){
    while(!st.empty() && arr[st.peek()] < arr[i]){
        vec[st.peek()] = arr[i];
        st.pop();
    }
    st.push(i);
}
for (int i = 0; i < vec.size(); i++){
    cout<<vec[i]<<" ";
}
return 0;
}