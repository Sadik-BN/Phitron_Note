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


void node_insert_h(Node* &head,int val)
{
    Node* insertable_node=new Node(val);
    insertable_node->next=head;
    head=insertable_node;
}

void print_linked_list(Node* head)
{
    while (head != NULL)
    {
        cout << head->val<<endl;
        head=head->next;
    }

}

int main()
{
    Node* head =new Node(10);
    Node* a =new Node(20);
    Node* b =new Node(30);

    head->next=a;
    a->next=b;

    node_insert_h(head,100);

    print_linked_list(head);

    cout<<"head value "<< head->val<<endl;


    return 0;
}