#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node *Head;
Node *Tail;
void insertinlist(int x){
    if(Head == NULL){
        Head = new Node(x);
        Tail = Head;
    }
    else{
        Node *temp = new Node(x);
        Tail->next = temp;
        Tail = temp;
    }   
}

void displaylist(){
    Node *temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    cout<<"Enter the elements of list :: "<<endl;
    int x;
    while(true){
        cin>>x;
        if(cin.fail()){
            displaylist();
            break;
        }
        insertinlist(x);
    }


    return 0;
}