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
void delete_head(Node *&head)
{
    Node *del_node = head;
    head = head->next;
    delete del_node;
}
void delete_node(Node *&head, int indx)
{
    if (indx == 0)
    {
        delete_head(head);
        return;
    }

    Node *tmp_head = head;
    for (int i = 0; i < indx - 1; i++)
    {
        tmp_head = tmp_head->next;

        if (tmp_head->next == NULL)
        {
            return;
        }
    }

    Node *del_node;
    del_node = tmp_head->next;
    tmp_head->next = tmp_head->next->next;

    delete del_node;
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

    delete_node(head, 1);
    print_linked_list(head);

    return 0;
}