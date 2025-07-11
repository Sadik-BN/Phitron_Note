#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
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
void node_insert_h(Node *&head, Node *&tail, int val)
{
    Node *insertable_node = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = insertable_node;
        tail = insertable_node;
        return;
    }
    insertable_node->next = head;
    head = insertable_node;
}
void node_insert_t(Node *&head, Node *&tail, int val)
{
    Node *insertable_node = new Node(val);

    if (head == NULL && tail == NULL)
    {
        head = insertable_node;
        tail = insertable_node;
        return;
    }

    tail->next = insertable_node;
    tail = insertable_node;
}
void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void delete_head(Node *&head,Node* &tail)
{
    if(head==NULL)
    {
        return;
    }
    Node *del_node = head;
    head = head->next;
    if(head == NULL)
    {
        tail=NULL;
        return;
    }
    delete del_node;
}
void delete_tail(Node *head, Node *&tail)
{
    while (head->next->next != NULL)
    {
        head = head->next;
    }

    Node *del_node = head->next;
    head->next = NULL;
    tail = head;

    delete del_node;
}
void delete_node(Node *&head, int indx)
{
    Node *tmp_head = head;
    for (int i = 0; i < indx - 1; i++)
    {
        tmp_head = tmp_head->next;
    }

    Node *del_node;
    del_node = tmp_head->next;
    tmp_head->next = tmp_head->next->next;

    delete del_node;
}

int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 1; i <= t; i++)
    {
        int x, v;

        cin >> x >> v;

        if (x == 0)
        {
            node_insert_h(head, tail, v);
        }
        else if (x == 1)
        {
            node_insert_t(head, tail, v);
        }

        else if (x == 2)
        {
            if (v == 0)
            {
                delete_head(head,tail);
            }
            else if (v == size(head) - 1)
            {
                delete_tail(head, tail);
            }
            else if (v > 0 && v < size(head) - 1)
            {
                delete_node(head, v);
            }
        }
        print_linked_list(head);
        cout << endl;
    }
    return 0;
}