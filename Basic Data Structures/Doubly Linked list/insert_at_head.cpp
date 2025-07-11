#include<bits/stdc++.h>
 using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_head(Node* &head,Node* tail,int val)
{
    Node* new_node= new Node(val);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}

void print_dll_fwd(Node* head)
{
        
    while(head!=NULL)
    {
        cout<< head->val<<" ";
        head=head->next;
    }
}
void print_dll_rev(Node* tail)
{
    while(tail!=NULL)
    {
        cout << tail->val<<" ";
        tail=tail->prev;
    }
}
int main()
{
         Node* head = new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* tail= new Node(40);

    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=tail;
    tail->prev=b;

    insert_at_head(head,tail,23);
    insert_at_head(head,tail,290);
    print_dll_fwd(head);
    cout<<endl;
    print_dll_rev(tail);

    
    
    return 0;
}