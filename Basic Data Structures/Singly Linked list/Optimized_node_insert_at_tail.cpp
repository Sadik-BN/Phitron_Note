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

void node_insert_t(Node* &head,Node* &tail,int val)
{
    Node* insertable_node = new Node(val);

    if(head == NULL)
    {
        head=insertable_node;
        return;
    }

    tail->next=insertable_node;
    tail=insertable_node;
}

int main()
{

    Node *head=new Node(10);
    Node *tail=new Node(20);
    head->next=tail;


    node_insert_t(head,tail,100);
    node_insert_t(head,tail,200);
    node_insert_t(head,tail,300);

    cout << head ->val <<endl;
    
    print_linked_list(head);

    cout << tail ->val <<endl;
    return 0;
}