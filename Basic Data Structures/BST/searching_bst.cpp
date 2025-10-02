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

bool search(Node *root, int val)
{
    if(root==NULL)
    {
        return false;
    }
    if(val==root->val)
    {
        return true;
    }
    else if(val<root->val)
    {
        return search(root->left,val);
    }
    else if(val>root->val)
    {
        return search(root->right,val);
    }
}
int main()
{

    Node* root = NULL;

    input_bin_tree(root);

    int n;
    cin >> n;

    if(search(root,n))
        cout << "Found"<<endl;
    else
        cout << "Not Found"<<endl;
    
    return 0;
}