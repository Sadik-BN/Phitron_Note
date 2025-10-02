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

void node_insert_a(Node *&head, int indx, int val)
{
    Node *tmp_head = head;

    Node *insertable_node = new Node(val);
    if (indx == 0)
    {
        insertable_node->next = head;
        head = insertable_node;
        return;
    }
    
    for (int i = 0; i < indx - 1; i++)
    {
        tmp_head = tmp_head->next;
        if (tmp_head == NULL)
        {
            return;
        }
    }

    insertable_node->next = tmp_head->next;
    tmp_head->next = insertable_node;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    node_insert_a(head, 1, 100);

    print_linked_list(head);

    cout << "head value " << head->val << endl;

    return 0;
}