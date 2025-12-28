#include<iostream>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;
    
    ListNode(int data){
        val = data;
        next = NULL;
    }
};
void createlist(ListNode*& head){
    int x;
    cout<<"\nEnter value ::";
    cin>>x;
    if(x == 0) return;
    ListNode* newNode = new ListNode(x);
    newNode->next = head;
    head = newNode;
    createlist(head);
}
void display(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}
bool isPalindrome(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast != NULL){
        slow = slow->next;
    }
    ListNode* temp = slow;
    ListNode* ptemp = NULL;

    while(temp != NULL){
        ListNode* ntemp = temp->next;
        temp->next = ptemp;
        ptemp = temp;
        temp = ntemp;
    }
    ListNode* one = head;
    ListNode* two = ptemp;
    while(two != NULL){
        if(one->val != two->val) return false;
        one = one->next;
        two = two->next;
    }
    return true;
}
int main(){
    ListNode* head = NULL;
    createlist(head);
    display(head);
    bool ans = checkpal(head);
    if(ans) cout<<"true";
    else cout<<"false";
    return 0;
}