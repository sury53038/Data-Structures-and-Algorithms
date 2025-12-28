#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int s){
        size = s;
        arr = new int[s];
        top = -1;
    }

    void push(int val){
        if(top == size-1){
            cout<<"\nStack Overflow.";
            return;
        }
        else{
            top++;
            arr[top] = val;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"\nStack underflow.";
            return;
        }
        else{
            top--;
        }
    }
    void display(){
        if(top == -1){
            cout<<"\nEmpty Stack."<<endl;
            return;
        }
        else{
            int temp = top;
            while(temp != -1){
                cout<<arr[temp]<<endl;
                --temp;
            }
        }
    }
    void peek(){
        if(top == -1){
            cout<<"Stack Underflow."<<endl;
            return;
        }
        else{
            cout<<arr[top]<<endl;
        }
    }
};

int main(){

Stack st(5);
st.push(6);
st.push(7);
st.push(8);
st.push(9);
st.push(10);
st.display();
st.pop();
st.display();
st.peek();
return 0;
}