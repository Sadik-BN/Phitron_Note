#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *left;
        Node *right;

        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
void level_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() != true)
    {
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);

        cout << q.front()->val << " ";
        q.pop();
    }
}
Node* mk_BST(vector<int> array,int left,int right)
{
    if(right<left)
    {
        return NULL;
    }
    int mid=(left+right)/2;
    Node* newnode = new Node(array[mid]);

    Node* left_root= mk_BST(array,left,mid-1);
    newnode->left=left_root;
    Node* right_root= mk_BST(array,mid+1,right);
    newnode->right=right_root;

    return newnode;
}
int main()
{
    int n;
    
    cin >> n;
    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    level_order(mk_BST(a,0,n-1));
    return 0;
}