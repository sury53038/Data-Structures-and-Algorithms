#include<iostream>
#include<queue>
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

TreeNode* tree(){
    int val;
    cout<<"Value :: ";
    cin>>val;
    if(val == -1){
        return NULL;
    }

    TreeNode* temp = new TreeNode(val);
    cout<<"Value of left child of "<<val<<" ::";
    temp->left = tree();
    cout<<"Value of right child of "<<val<<" ::";
    temp->right = tree();
    return temp;
}
void LevelOrder(TreeNode* node){
    TreeNode* temp;
    queue<TreeNode*>q;
    q.push(node);
    while(q.size() != 0){
        temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int main(){

    TreeNode* root = tree();
    cout<<endl;

    LevelOrder(root);

    return 0;
}