#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = NULL;
    }
};

int count = 1;

    void removeNthFromEnd(ListNode* &head, int n) {
        ListNode* temp = head;
        while(temp != NULL){
            temp= temp->next;
            count++;
        }

        temp = head;

        count = count-n;
        for(int i = 0; i < count; i++){
            temp = temp->next;
        }
        ListNode* alpha = temp->next;
        temp->next = alpha->next;
    }

int main(){
    int p;
    cout<<"Size of the linked list :: ";
    cin>>p;
    ListNode* node = new ListNode(-1);
    ListNode* ans = node;

    int x;
    for(int i = 0; i < p; i++){
        cin>>x;
        ListNode* temp = new ListNode(x);
        node->next = temp;
        node = temp;
    }
    ans = ans->next;

    removeNthFromEnd(ans, 2);

    ListNode* curr = ans;

    for(int i = 0; i < count; i++){
        cout<<curr->val<<" ";
        curr = curr->next;
    }
    cout<<"hello";
    return 0;
}