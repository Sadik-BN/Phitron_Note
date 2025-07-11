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

void node_insert_t(Node *&head, Node *&tail, int val)
{
    Node *insertable_node = new Node(val);

    if (head == NULL)
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
        cout << head->val << endl;
        head = head->next;
    }
}

void sort_linked_list(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val) // for decending order use '<' this sign
            {
                swap(i->val, j->val);
            }
        }
    }

    // Using while loop

    // while (head->next != NULL)
    // {
    //     Node *i = head->next;
    //     while (i != NULL)
    //     {
    //         if (head->val > i->val)
    //         {
    //             swap(head->val, i->val);
    //         }

    //         i = i->next;
    //     }

    //     head = head->next;
    // }
}
int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        node_insert_t(head, tail, val);
    }

    sort_linked_list(head);

    print_linked_list(head);

    return 0;
}