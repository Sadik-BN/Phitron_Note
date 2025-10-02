#include<bits/stdc++.h>
 using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};



void print_linked_list(Node* head)
{
    while (head != NULL)
    {
        cout << head->val<<endl;
        head=head->next;
    }

}

void node_insert_t(Node* &head,int val)
{
    Node* insertable_node = new Node(val);
    Node* tmp_head = head;
    if(head == NULL)
    {
        head=insertable_node;
        return;
    }

    while(tmp_head->next != NULL)
    {
        tmp_head=tmp_head->next;
    }

    tmp_head->next= insertable_node;
}

int main()
{

    Node *head=NULL;
    node_insert_t(head,100);
    node_insert_t(head,200);
    node_insert_t(head,300);

    cout << head->val <<endl;
    print_linked_list(head);

    return 0;
}