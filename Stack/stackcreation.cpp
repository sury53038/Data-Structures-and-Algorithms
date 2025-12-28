#include<bits/stdc++.h>

class Stack
{
    int *arr;
    int size;
    int top;

    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int [s];
    }
    void push(int val){
        if(top == size-1){
            cout<<"\nStack Overflow.";
        }
        else{
            top++;
            arr[top] = val;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"\nStack Underflow."
        }
        else{
            top--;
        }
    }
}

int main(){

Stack st;
st.push(1);
st.pop();

return 0;
}