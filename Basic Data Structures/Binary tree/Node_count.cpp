#include <bits/stdc++.h>
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
void input_bin_tree(Node* &root)
{
    int val;
    cin >> val;
    if (val != -1)
    {
        Node *newnode = new Node(val);
        root=newnode;
    }
    else
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (q.empty() != true)
    {
        int l, r;
        cin >> l;
        if (l != -1)
            q.front()->left = new Node(l);
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        cin >> r;
        if (r != -1)
            q.front()->right = new Node(r);
        if (q.front()->right != NULL)
            q.push(q.front()->right);

        q.pop();
    }
}
void level_order(Node *root)
{
    if(root==NULL)
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
void in_order(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    in_order(root->left);
    cout<<root->val<<" ";
    in_order(root->right);
}
int node_count(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    queue<Node *> q;
    int count=0;
    q.push(root);
    while (q.empty() != true)
    {
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);

        count++;
        q.pop();
    }
    return count;
}
int main()
{

    Node* root=NULL;
    input_bin_tree(root);
    
    cout << node_count(root);
    
    return 0;
}