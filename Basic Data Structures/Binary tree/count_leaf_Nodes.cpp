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
int count_leaf_nodes(Node* root)
{
    if(root==NULL)
        return 0;
    if(root->left ==NULL && root->right==NULL)
        return 1;
    
    int l= count_leaf_nodes(root->left);

    int r=count_leaf_nodes(root->right);

    return l+r;

}

int main()
{

    Node* root=NULL;
    input_bin_tree(root);
    cout<<count_leaf_nodes(root);
    
    return 0;
}