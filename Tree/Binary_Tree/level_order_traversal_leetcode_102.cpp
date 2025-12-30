#include<iostream>
#include<vector>
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

    TreeNode* node = new TreeNode(x);
    cout<<"Enter the left child of "<<x<<" :: ";
    node->left = createTree();
    cout<<"Enter the right child of "<<x<<" ::";
    node->right = createTree();

    return node;
}

void preOrderTraversal(TreeNode* node){
    if(node == NULL){
        return;
    }
    cout<<node->val<<" ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
    return;
}

#include<queue>
vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*>q;

    vector<vector<int>>ans;

    if(root){
        q.push(root);
    }
    while(!q.empty()){
        vector<int>vec;
        int size = q.size();

        for(int i = 0; i < size; i++){
            TreeNode* temp = q.front();
            q.pop();

            vec.push_back(temp->val);

            if(temp->left)q.push(temp->left);

            if(temp->right)q.push(temp->right);
        }
        ans.push_back(vec);
    }
    return ans;
        
}

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    queue<TreeNode*> q1;
    queue<TreeNode*> q2;

    vector<vector<int>>ans;

    q1.push(root);

    while(!q1.empty() || !q2.empty()){

        vector<int>vec;

        if(!q1.empty()){
            while(!q1.empty()){
                TreeNode* temp = q1.front();
                q1.pop();

                vec.push_back(temp->val);
                if(temp->right)q2.push(temp->right);
                if(temp->left)q2.push(temp->left);   
            }
            ans.push_back(vec); 
            vec.clear();
        }
        else{
            while(!q2.empty()){
                TreeNode* temp = q2.front();
                q2.pop();

                vec.push_back(temp->val);
                if(temp->left)q1.push(temp->left);
                if(temp->right)q1.push(temp->right);
            }
            ans.push_back(vec);
        }
    }
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

    cout<<"Enter the root node :: ";
    TreeNode* root = createTree();
    preOrderTraversal(root);

    return 0;
}