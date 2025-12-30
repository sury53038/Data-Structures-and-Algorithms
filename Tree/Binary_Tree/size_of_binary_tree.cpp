#include<iostream>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode* createTree(){
    int x;
    cin>>x;
    if(x == -1){
        return NULL;
    }

    TreeNode* temp = new TreeNode(x);
    cout<<"Left Child of "<<x<<" ::";
    temp->left = createTree();
    cout<<"Right Child of "<<x<<" ::";
    temp->right = createTree();

    return temp;
}

void preOrderTreversal(TreeNode* node){
    if(node == NULL){
        return;
    }
    cout<<node->val<<" ";
    preOrderTreversal(node->left);
    preOrderTreversal(node->right);
}

int getSize(TreeNode* node){
    if(node == NULL){
        return 0;
    }

    return 1+getSize(node->left) + getSize(node->right);
}
int main(){
    cout<<"Enter root node value ::";
    TreeNode* root = createTree();

    preOrderTreversal(root);
    cout<<"\nSize of the tree is :: ";
    cout<<getSize(root);

    return 0;
}