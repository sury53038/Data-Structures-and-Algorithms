#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    

    node(int val){
        data = val;
        left = right = NULL;
    }
};

node* binarytree(){
    int x;
    cin >> x;
    if(x == -1){
        return NULL;
    }
    node * temp = new node(x);

    cout<<"\nleft child  of "<<x<<" "<<endl;
    temp->left = binarytree();
    cout<<"\nright child of "<<x<<" "<<endl;
    temp->right = binarytree();
    return temp;
}
void preorder(node *root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}
void inorder(node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}
int main(){
    // cout<<"enter root value :: ";
    // int x;
    // cin>>x;
    node *root = binarytree();
    preorder(root);
    postorder(root);
    inorder(root);
    return 0;
}