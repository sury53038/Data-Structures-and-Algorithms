#include<iostream>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        val = value;
        left = NULL;
        right = NULL;

    }
};
TreeNode* create(){
    int x;
    cout<<"Value :: ";
    cin>>x;

    if(x == -1){
        return NULL;
    }
    TreeNode* temp = new TreeNode(x);
    cout<<"Enter Left Child of "<<x<<" :: ";
    temp->left = create();
    cout<<"Enter right child of "<<x<<" :: ";
    temp->right = create();
    return temp;
}

int countLeafs(TreeNode* node, int &count){
    if(node == NULL){
        return 0;
    }
    
    if(node->left == NULL && node->right == NULL){
        count++;
    }
    
    countLeafs(node->left, count);
    countLeafs(node->right, count);

    return count;
}

int main(){
    TreeNode* root = create();
    int ans = 0;
    ans = countLeafs(root, ans);
    cout<<ans;

    return 0;
}