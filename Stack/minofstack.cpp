#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
    int first;
    int second;
};
class Node{
    public:
    Pair data;
    Node *next;

    Node(int val1, int val2){
        data.first = val1;
        data.second = val2;
        next = NULL;
    }
};

class MinStack{
    int size;
    Node *top;
    
    public:
    MinStack(){
        size = 0;
        top = NULL;
    }

    void push(int val1, int val2){
        Node *temp = new Node(val1, val2);
        temp->next = top;
        top = temp;
        size++;
    }
    void pop(){
        if(top == NULL){
            return;
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
            cout<<curr->data.first<<" "<<curr->data.second<<endl;
            curr = curr->next;
        }
    }
};




int main(){

    MinStack st;
    st.push(1,2);
    st.push(2,5);
    st.push(10,11);
    st.display();
    st.pop();
    st.display();


    return 0;
}