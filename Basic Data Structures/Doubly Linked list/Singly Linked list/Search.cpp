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


int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }

            node_insert_t(head, tail, val);
        }
        int x, count = -1;
        cin >> x;

        for (Node *j = head; j != NULL; j = j->next)
        {
            count++;
            if (j->val == x)
            {
                break;
            }
            if (j->next == NULL)
            {
                count = -1;
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}