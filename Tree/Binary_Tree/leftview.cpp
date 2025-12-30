#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *createTree()
{
    int val;
    cout << "Root Node :: ";
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    Node *temp = new Node(val);
    cout<<"Left child of "<<temp->data<<" :: ";
    temp->left = createTree();
    cout<<"Right child of "<<temp->data<<" :: ";
    temp->right = createTree();
    return temp;
}

void displayTree(Node* root){
    Node* temp = root;
    if(!temp){
        return;
    }
    cout<<temp->data<<" ";
    displayTree(temp->left);
    displayTree(temp->right);
}

vector<int> leftView(Node *root)
{
    queue<Node *> q;

    q.push(root);

    vector<int> ans;

    while (!q.empty())
    {
        ans.push_back(q.front()->data);
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return ans;
}

vector<int>RightSideView(Node* root){
    queue<Node*>q;
    vector<int>ans;

    q.push(root);

    while(!q.empty()){
        int n = q.size();
        while(n > 1){
            Node* temp = q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            n--;
        }
        ans.push_back(q.front()->data);

        if(q.front()->left){
            q.push(q.front()->left);
        }
        if(q.front()->right){
            q.push(q.front()->right);
        }
        q.pop();
    }
    return ans;
}

vector<int>topView(Node* root){
    queue<Node*>q;
    q.push(root);

    vector<int>ans;

    while(!q.empty()){
        ans.push_back(q.front()->data);
        int n = 
    }


}

int main(){

    Node* tree = createTree();
    cout<<"\n\nDisplaying entire tree :: "<<endl;
    displayTree(tree);

    cout<<"\n\n Left view of the tree"<<endl;
    vector<int>ans = leftView(tree);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n\n";
    cout<<"Right view of the tree"<<endl;
    vector<int>anss = RightSideView(tree);
    for(int i = 0; i < anss.size(); i++){
        cout<<anss[i]<<" ";
    }
    return 0;
}