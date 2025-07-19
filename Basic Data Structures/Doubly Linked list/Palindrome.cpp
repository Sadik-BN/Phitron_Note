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
void input_dll(Node* &head,Node* &tail)
{
    int val;

    while(true)
    {
        cin >> val;

        if(val == -1)
        {
            break;
        }

        insert_at_tail(head,tail,val);       
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    input_dll(head,tail);

    Node *i=head,*j=tail;
    bool flag=true;
    while(i!=j)
    {
        if(i->val!=j->val)
        {
            flag=false;
            break;
        }
        if(i->next==j)
        {
            break;
        }
        i=i->next;
        j=j->prev;
    }

    if(flag==false)
    {
        cout<<"NO";
    }
    if(flag==true)
    {
        cout << "YES";
    }

    return 0;
}