#include<bits/stdc++.h>
#define N 100
using namespace std;


class nstack{
    int top1;
    int top2;
    int *arr;
    public:
    nstack(){
        arr = new int[N];
        top1 = -1;
        top2 = N;
    }
    void push1(int x){
        if(top1 == top2-1){
            cout<<"Overflow."<<endl;
            return;
        }else{
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x){
        if(top2 == top1+1){
            cout<<"Overflown"<<endl;
            return;
        }
        else{
            top2--;
            arr[top2] = x;
        }
    }
    void pop1(){
        if(top1 == -1){
            cout<<"Underflow."<<endl;
            return;
        }
        else{
            
            top1--;
            return;
        }
    }
    void pop2(){
        if(top2 == N){
            cout<<"Underflow"<<endl;
            return;
        }
        else{
            top2--;
            return;
        }
    }
    void peek1(){
        if(top1 == -1){
            return;
        }
        else{
            cout<<arr[top1]<<endl;
            return;
        }
    }
    void peek2(){
        if(top2 == N){
            return;
        }
        else{
            cout<<arr[top2];
            return;
        }
    }
    void display1(){
        for(int i = 0; i <= top1; i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
    void display2(){
        for(int i = N-1; i >= top2; i--){
            cout<<arr[i]<<" ";
        }
        return;
    }
};
int main(){

    nstack st;
    st.push1(34);
    st.push1(55);
    st.push2(56);
    st.push1(2);
    st.push2(33);
    st.display1();
    cout<<endl;
    st.display2();
    st.pop1();
    cout<<endl;
    st.display1();
    return 0;
}