#include<bits/stdc++.h>
using namespace std;
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

void print_dll_fwd(Node *head)
{

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

void reverse_linked_list(Node* head , Node* tail)
{
    while(head->next != tail->next && head->prev != tail->prev)
    {
        swap(head->val,tail->val);
        if(head->next == tail && tail->prev == head)
        {
            break;
        }
        head=head->next;
        tail=tail->prev;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    input_dll(head,tail);


    reverse_linked_list(head,tail);

    print_dll_fwd(head);

    cout<<"\nHead "<<head->val<< " Tail "<< tail->val<< endl;
    return 0;
}