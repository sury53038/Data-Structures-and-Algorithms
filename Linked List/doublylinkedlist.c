#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct ddlnode{
    struct ddlnode *prev, *post;
    int data;
};
struct ddlnode* start = NULL;
struct ddlnode* temp, *newnode;
void create(){
    int n; char ch;
    printf("\nEnter first element: ");
    scanf("%d",&n);
    
    start=(struct ddlnode*)malloc(sizeof(struct ddlnode));
    start->prev=start->post=NULL;
    start->data=n;
    temp=start;
    printf("\ndo you want to continue? Y/N");
    ch=getche();
    printf("\nenter -1 to stop new entry");
    while(ch=='y'||ch=='Y'){
        
    
        printf("\nNew element: ");
        scanf("%d",&n);
        if(n==-1)
        break;
        newnode=(struct ddlnode*)malloc(sizeof(struct ddlnode));
        newnode->post=newnode->prev=NULL;
        newnode->data=n;

        temp->post=newnode;
        newnode->prev=temp;
        temp=temp->post;
    }
}
void display(struct ddlnode *begin){
    struct ddlnode *current;
    current=begin;
    if(begin == NULL){
        printf("\nNo list found");
    }
    else{
        while(current != NULL){
        printf("%3d",current->data);
        current=current->post;
        }
    }
}
void display_reverse(struct ddlnode *begin){
    struct ddlnode *current;
    
    if(begin==NULL)
        printf("\nlist empty");
    else{
        current=begin;
        while(current->post != NULL){
            current=current->post;
        }
        while (current!=NULL){
            printf("%3d",current->data);
            current=current->prev;
        }        
    }
}
void insetatbegin(struct ddlnode **begin){
    struct ddlnode *temp,*new1;
    temp=*begin;
    new1=(struct ddlnode*)malloc(sizeof(struct ddlnode));
    
    if(!new1)
        printf("\nMemory error");   
    if(*begin==NULL)
        temp=new1;
    int value;
    printf("\nEnter the value to insert: ");
    scanf("%d",&value); 
   
    new1->data=value;
    new1->post=temp;
    new1->prev=NULL;
    temp->prev=new1;
    *begin=new1;
}
int main(){
    char ch;
    system("cls");
    create();
    display(start);
    printf("\ndo you want to inset an element at start: ");
    ch=getche();
    if(ch=='y'||ch=='Y'){
    insetatbegin(&start);
    }
    display(start);
    printf("\nlist in reverse\n");
    display_reverse(start);
    return 0;
}