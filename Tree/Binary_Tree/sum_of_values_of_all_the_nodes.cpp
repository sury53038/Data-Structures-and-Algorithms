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
    cout<<"Enter the left child of "<<x<<" :: ";
    temp->left = createTree();
    cout<<"Enter the right child of "<<x<<" :: ";
    temp->right = createTree();

    return temp;
}

void preOrderTraversal(TreeNode* node){
    if(node == NULL){
        return;
    }
    cout<<node->val<<" ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

int sumOfNodes(TreeNode* node){
    if(node == NULL){
        return 0;
    }

    return node->val + sumOfNodes(node->left) + sumOfNodes(node->right);
}


int main(){

    TreeNode* root = createTree();

    preOrderTraversal(root);

    cout<<"\n Sum of nodes :: "<<sumOfNodes(root);
    return 0;
}