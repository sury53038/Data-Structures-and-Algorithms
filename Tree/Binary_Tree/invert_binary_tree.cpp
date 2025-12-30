#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode *createTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }

    TreeNode *temp = new TreeNode(x);
    cout << "Enter left child  of " << x << " :: " << endl;
    temp->left = createTree();
    cout << "Enter right child of " << x << " :: " << endl;
    temp->right = createTree();

    return temp;
}

void printTree(TreeNode *root)
{
    if (root)
    {
        cout << root->val << " ";
    }
    if (root->left)
    {
        printTree(root->left);
    }
    if (root->right)
    {
        printTree(root->right);
    }
    return;
}
vector<vector<int>> ans;
TreeNode *invertTree(TreeNode *root)
{
    if(!root) return NULL;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> vec;
        int size = q.size();
        while (size)
        {
            TreeNode *temp = q.front();
            q.pop();
            vec.push_back(temp->val);

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            size--;
        }
        reverse(vec.begin(), vec.end());
        ans.push_back(vec);
    }

    q.push(root);
    int i = 0;
    while (!q.empty() && i < ans.size())
    {
        int size = q.size();
        int j = 0;
        while (size && j < ans[i].size())
        {
            TreeNode *temp = q.front();
            q.pop();
            temp->val = ans[i][j];
            j++;

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            size--;
        }
        i++;
    }

    return root;
}

int main()
{   
    cout << "Enter root node val :: ";
    TreeNode *root = createTree();
    cout << "\n\n";
    printTree(root);
    cout << "\n\n";
    root = invertTree(root);
    printTree(root);

    cout<<"\nprinting level order traversal :: "<<endl;
    cout<<ans.size()<<endl;
    cout<<arr.size()<<endl;

    cout<<"inverted st"<<endl;
    for(int i = 0 ; arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.clear();

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            arr.push_back(ans[i][j]);
        }
    }

    for(int i = 0; i < arr.size(); i ++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// 1 5 10 -1 -1 2 -1 -1 3 6 12 -1 -1 15 -1 -1 9 -1 16 -1 -1