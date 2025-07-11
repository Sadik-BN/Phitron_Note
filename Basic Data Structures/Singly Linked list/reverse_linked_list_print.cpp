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
void reverse_print_linked_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    reverse_print_linked_list(head->next);
    cout << head->val << endl;
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

    reverse_print_linked_list(head);
    return 0;
}