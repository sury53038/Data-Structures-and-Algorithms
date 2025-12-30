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
    cout<<"Left child of "<<x<<" :: ";
    temp->left = createTree();
    cout<<"Right child of "<<x<<" :: ";
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

int heightOfTree(TreeNode* temp){
    if(temp == NULL){
        return 0;
    }
    return (1 + max(heightOfTree(temp->left) , heightOfTree(temp->right)));
}
int countLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        return countLeaves(root->left)+countLeaves(root->right);        
}

int countNonLeafNodes(TreeNode* node) {
        if(node == NULL){
            return 0;
        }
        if(node->left == NULL && node->right == NULL){
            return 0;
        }

        return 1+countNonLeafNodes(node->left) + countNonLeafNodes(node->right);
}


int main(){
    cout<<"Enter the root node :: ";
    TreeNode* root = createTree();

    preOrderTraversal(root);

    cout<<"\nHeight of the binary tree :: "<<heightOfTree(root);

    cout<<"\nNumber of leaf nodes :: "<<countLeaves(root);

    cout<<"\nNumber of non-leaf nodes :: "<<countNonLeafNodes(root);
    return 0;
}