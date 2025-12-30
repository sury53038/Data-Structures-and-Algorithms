#include<iostream>
using namespace std;


class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void PreOTraversal(TreeNode* node){
    if(node == NULL){
        cout<<"-1"<<" ";
        return;
    }
    TreeNode* temp = node;

    cout<<temp->data<<" ";
    PreOTraversal(temp->left);
    PreOTraversal(temp->right); 
}

void PostOTraversal(TreeNode* node){
    if(node == nullptr){
        cout<<-1<<" ";
        return;
    }
    TreeNode* temp = node;

    PostOTraversal(temp->left);
    PostOTraversal(temp->right);
    cout<<temp->data<<" ";
}

void InOTraversal(TreeNode* node){
    if(node == nullptr){
        cout<<-1<<" ";
        return;
    }
    TreeNode* temp = node;

    InOTraversal(temp->left);
    cout<<temp->data<<" ";
    InOTraversal(temp->right);
}

TreeNode* BinaryTree(){
    int x;
    cin>>x;

    if(x == -1){
        return NULL;
    }
    TreeNode* temp = new TreeNode(x);

    cout<<"Enter left child of "<<x<<endl;
    temp->left = BinaryTree();
    cout<<"Enter right child of "<<x<<endl;
    temp->right = BinaryTree();

    return temp;
}


int main(){

    TreeNode* node = BinaryTree();

    cout<<"Pre-order Traversall"<<endl;
    PreOTraversal(node);
    cout<<endl;
    cout<<"Post-order Traversall"<<endl;
    PostOTraversal(node);
    cout<<endl;
    cout<<"In-order Traversall"<<endl;
    InOTraversal(node);


    return 0;
}