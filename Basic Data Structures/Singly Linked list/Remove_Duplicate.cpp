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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        node_insert_t(head, tail, val);
    }

    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *j = i;
        while (j->next != NULL)
        {
            if (i->val == j->next->val)
            {
                Node *del = j->next;
                j->next = j->next->next;
                delete del;
            }
            else
            {
                j = j->next;
            }
        }
    }

    print_linked_list(head);
    return 0;
}