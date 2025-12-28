#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    public:
    node *top;
    int size;
   
    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int a){
        node *temp = new node(a);
        temp->next = top;
        top = temp;
        size++;
    }
    int peek(){
        if(top == NULL){
            return -1;
        }
        else{
            return top->data;
        }
    }
    void pop(){
        if(top == NULL){
            cout<<"\nStack Underflow"<<endl;
            return;
        }
        else{
            node* curr = top;
            top = top->next;
            delete curr;
            size--;
            return;
        }
    }
    int getSize(){
        if(top == NULL){
            return 0;
        }
        else{
            return size;
        }
    }
    bool empty(){
        if(size == 0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    vector<int>vec = {3,1,2,4};
    Stack st;
    int n = vec.size();
    vector<int>left(n, -1);
    vector<int>right(n, n);
    int mod = (int)(1e9 + 7);

    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && vec[st.peek()] > vec[i]){
            left[st.peek()] = i;
            st.pop();

        }
        st.push(i);
    }

    while(!st.empty()){
        st.pop();
    }

    for(int i = 0; i < n; i++){
        while(!st.empty() && vec[st.peek()] > vec[i]){
            right[st.peek()] = i;
            st.pop();
        }
        st.push(i);
    }
    int sum = 0;
    vector<int>main(n, 0);

    for(int j = 0; j < n; j++){
        cout<<vec[j]<<' ';
    }
    cout<<endl;
    for(int j = 0; j < n; j++){
        cout<<left[j]<<' ';
    }
    cout<<endl;
    for(int j = 0; j < n; j++){
        cout<<right[j]<<' ';
    }
    cout<<endl;
    for(int k = 0; k < n; k++){
        main[k] = ((right[k]-k) * (k-left[k]) * 1ll * vec[k]);// % mod;
        sum += main[k]; //% mod;
        cout<<"\nvec_ele :: "<<main[k]<<"   sum :: "<<sum<<endl;
    }

    return 0;
}