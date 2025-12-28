#include<iostream>

using namespace std;

class stack{
    int *arr;
    int size;
    int top;

    public:
    stack(int s){
        size = s;
        top = -1;
        arr = new int [s];
    }
    void push(int val){
        if(top == size-1){
            cout << "stack overflow"<<endl;
            return;
        }
        else{
            top++;
            cout << "Pushed " << val << " into the stack"<<endl;
            arr[top] = val;
        }
    }
    void pop(){
        if(top == -1){
            cout << "Stak underflow"<<endl;
            return;
        }
        else{
            cout << "Popped "<< arr[top]<<endl;
            top--;
        }
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty";
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isempty(){
        if(top == -1) return true;
        else 
        {
            return false;
        }
    }
};

int main(){

    stack s(5);
    s.push(0);
    s.push(4);
    s.push(5);
    s.push(1);

    cout<< s.peek();
    
    s.pop();
    cout<< s.peek();
    
    s.pop();
    cout<< s.peek();
    
    s.pop();
    cout<< s.peek();
    
    s.pop();

    cout<<s.isempty()<<endl;
    cout << s.peek();
    return 0;
}