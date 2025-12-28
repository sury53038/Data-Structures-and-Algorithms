#include<iostream>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int data){
            val = data;
            next = nullptr;
        }
};
void insertatbegin(ListNode*& node){
    int x;
    cout<<"Enter the value :: ";
    cin>>x;
    if(x == 0) return;
    ListNode* newNode = new ListNode(x);
    newNode->next = node;
    node = newNode;
    insertatbegin(node);
}
int main(){
    ListNode* head = NULL;
    insertatbegin(head);
    int count = 0;
    ListNode* temp = head;
    while(temp != nullptr){
        cout<<temp->val<<" ";
        count++;
        temp = temp->next;
    }
    cout<<"\nTotal number of nodes in the list are "<<count;
    return 0;
}