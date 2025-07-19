#include<bits/stdc++.h>
 using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}
void insert_at_any(Node *&head, Node *&tail, int pos, int val,bool &flag)
{
    if (pos == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    else if (pos > 0)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            cout<< "Invalid"<<endl;
            flag=false;
            return;
        }
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
                cout<< "Invalid"<<endl;
                flag=false;
                return;
            }
        }
        if (tmp->next == NULL)
        {
            insert_at_tail(head, tail, val);
            return;
        }

        new_node->next = tmp->next;
        tmp->next->prev = new_node;
        tmp->next = new_node;
        new_node->prev = tmp;
    }
    else
    {
        cout<< "Invalid"<<endl;
        flag=false;
        return;
    }
}
void print_dll_fwd(Node *head)
{

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void print_dll_rev(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail = NULL;

    int q;
    cin>>q;

    for(int i=1;i<=q;i++)
    {
        int x,v;

        cin>>x>>v;
        bool flag=true;
        insert_at_any(head,tail,x,v,flag);

        if(flag==true)
        {
            cout<<"L -> ";
            print_dll_fwd(head);
            cout<<endl;
            cout<<"R -> ";
            print_dll_rev(tail);
            cout<<endl;
        }
    }
    return 0;
}