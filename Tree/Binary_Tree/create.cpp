#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};

TreeNode* BinaryTree(){
    int x;
    cout<<"Enter value :: ";
    cin>>x;

    if(x == -1){
        return nullptr;
    }

    TreeNode* temp = new TreeNode(x);

    cout<<"Enter the left child of "<<x<<endl;
    temp->left = BinaryTree();

    cout<<"Enter the right child of "<<x<<endl;
    temp->right = BinaryTree();

    return temp;
}

int main(){

    cout<<"Enter the root node of tree :: "<<endl;
    TreeNode* root = BinaryTree();

    return 0;
}