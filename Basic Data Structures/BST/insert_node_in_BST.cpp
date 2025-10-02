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

void input_bin_tree(Node *&root)
{
    int val;
    cin >> val;
    if (val != -1)
    {
        Node *newnode = new Node(val);
        root = newnode;
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

void insert(Node * &root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }

    if (val < root->val)
    {
        if(root->left==NULL)
        {
            root->left = new Node(val);
            return;
        }
        else
        {
            insert(root->left, val);
        }

    }
    if (val > root->val)
    {
        if(root->right==NULL)
        {
            root->right  = new Node(val);
            return;            
        }
        else
        {
            insert(root->right, val);
        }
        
    }
}
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
int main()
{
    Node *root = NULL;

    input_bin_tree(root);

    int n;
    cin >> n;

    insert(root, n);

    level_order(root);
    return 0;
}