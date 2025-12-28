#include<iostream>

using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int val){
        data = val;
        next = NULL;
    }
};


ListNode* rotateRight(ListNode* head, int k) {
    int count = 0;
    ListNode* counter = head;
    while(counter != NULL){
        count++;
        counter= counter->next;
    }
    if(k > count ){
        k = k/count;
    }

    for(int i = 0; i < k; i++){
        ListNode* pretemp = head;
        ListNode* temp = pretemp->next;
        while(temp->next != NULL){
            temp = temp->next;
            pretemp = pretemp->next;
        }
        ListNode* wh = new ListNode(temp->data);
        wh->next = head;
        head = wh;
        pretemp->next = NULL;

        delete temp;
    }
    return head;
}

int main(){
    
    ListNode* list = new ListNode(-1);
    ListNode* curr = list;

    int x;
    cout<<"Enter the size of the list:: ";
    cin>>x;

    cout<<"Enter values :: ";
    int p = 0;
    for(int i= 0; i < x; i++){
        cin>>p;
        ListNode* temp = new ListNode(p);
        curr->next = temp;
        curr = curr->next;
    }

    cout<<"Entire list is :: "<<endl;

    curr = list->next;

    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

    ListNode* newhead = rotateRight(list,2);
    curr = newhead;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

    return 0;
}