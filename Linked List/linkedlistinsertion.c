#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
struct Node*start=NULL;
struct Node*temp,*newNode;
void createLink(){
    int n; char ch;
    printf("Enter first element: ");
    scanf("%d",&n);
    if(n==-1)
    exit(0);
    start=(struct Node *)malloc(sizeof(struct Node*));
    start->data=n;
    start->next=NULL;

    temp = start;
    printf("\nDo you want to continue? Y/N ");
    ch=getche();
    printf("\n");
    // if(ch!='y'||ch!='Y'){
    // exit(0);
    
    while(ch=='y'||ch=='Y'){
        printf("New element: ");
        scanf("%d",&n);
        if(n==-1)
        break;
    
        newNode = (struct Node*)malloc(sizeof(struct Node*));
        newNode->data=n;
        newNode->next=NULL;
        
        temp->next=newNode;
        temp=temp->next;

        // printf("\nWant to continue: ");
        // ch=getche();
    }
}
void printLinklist(struct Node* start){
    struct Node* current;
    current = start;
    printf("\nLink List\n");
    while(current != NULL){
        printf("%d\t",current->data);
        current=current->next;
    }
}
struct Node*insertAtBegin(struct Node *start,int data){
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=data;
    temp->next=NULL;

    if(start==NULL){
    printf("No list exitst");
    start=temp;
    }
        temp->next=start;
        start=temp;
    
        return start;
    //printLinklist(start);
}
struct Node*insetAtLast(struct Node *start,int data){
}
void  deleteatmid(struct Node **begin,int pos){
    struct Node* current, *temp;
    if(*begin==NULL){
        printf("\nlist empty");
        return;
    }
    
    else {
        current = *begin;
        for(int i=0;i<pos-1;i++)
        {
            current=current->next;
        }
    
        temp=current->next;
        if(temp->next==NULL)
        {
            printf("\nPositon doesn't exist.");
        }
        current->next=temp->next;
        free(temp);
    }
}
int main(){
    char c;
    int a,b;
    createLink();
    printf("\ndo you want to inset at node at beginning?");
    // scanf("%c",&c);
    c=getche();
    if(c=='Y'|| c=='y'){
        printf("\nEnter the element to insert: ");
        scanf("%d",&a);
        start = insertAtBegin(start,a);
    }
    printLinklist(start);
    printf("\ndo you want to delete any element?\nEnter position: ");
    scanf("%d",&b);
    if(b==-1){
        exit(0);
    }
    else{   
    deleteatmid(&start,b);
    }
    printLinklist(start);
    return 0;
}