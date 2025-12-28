#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node * start = NULL;
struct Node * temp, *newNode;

//creating a function to create a linkedlist.
void create(){
    int n; char ch;
    printf("\nEnter the element: ");
    scanf("%d",&n);
    start = (struct Node*)malloc(sizeof(struct Node));
    start ->data= n;
    start ->next = NULL;
    temp = start;
    printf("\nDo you want to continue? Y/N: ");
    ch=getche();
    while(ch=='y'||ch=='Y'){
        printf("\nNew element: ");
        scanf("%d",&n);
        newNode=(struct Node*)malloc(sizeof(struct Node));

        newNode->data=n;
        newNode->next=NULL;
        temp ->next = newNode;
        temp = temp->next;
        printf("\nWant to continue: ");
        ch=  getche();
    }
}
    void print(struct Node *head) {
        struct Node *current = head;
        for(current = head; current != NULL; current = current -> next){
            printf("\n%d",current ->data);
        }
    }
    int length(struct Node * head){
        struct Node *current = head;
        int coutn = 0;
        // for(current = head; current != NULL; current= current -> next){
        //     coutn ++;
            //current = current -> next;
        //}
        while(current != NULL){
            coutn++;
            current = current->next;
        }
        return coutn;
    }

int main(){
    create();
    printf("\n");
    print(start);
    printf("\n");
    //int x = length(start);
    printf("\nCount: %d",length(start));
   //  printf("\n%d",newNode->next);
    return 0;
}
