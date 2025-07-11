#include <bits/stdc++.h>
using namespace std;


// ---------------------------
// Doubly Linked List: Node Definition
// ---------------------------

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


// ---------------------------
// Insertion Functions
// ---------------------------

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
void insert_at_any(Node *&head, Node *&tail, int pos, int val)
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
            head = new_node;
            tail = new_node;
            return;
        }
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
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
        return;
    }
}


// ---------------------------
// Deletion Functions
// ---------------------------

void delete_from_head(Node* &head,Node* &tail)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        Node* del_node= head;

        head=NULL;
        tail=NULL;

        delete del_node;

        return;
    }

    Node* del_node= head;

    head->next->prev=NULL;
    head=head->next;

    delete del_node;


}


// ---------------------------
// Printing Functions
// ---------------------------

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


// --------------------------------------
// Other Doubly Linked List Functions
// --------------------------------------
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    Node *head = new Node(10);

    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    delete_from_head(head,tail);
    print_dll_fwd(head);

    return 0;
}