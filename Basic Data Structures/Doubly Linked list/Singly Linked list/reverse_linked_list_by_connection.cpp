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

 void reverse_linked_list (Node* &head,Node* &tail)
 {
    Node* tmp=head;
    if(head->next==NULL)
    {
        return;
    }
    head=head->next;
    reverse_linked_list(head,tail);

    tmp->next->next=tmp;
    tmp->next=NULL;
    tail=tmp;
 }
 void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{
    Node* head =new Node(10);
    Node* a =new Node(20);
    Node* b =new Node(30);
    Node* tail=new Node(40);

    head->next=a;
    a->next=b;
    b->next=tail;

    reverse_linked_list(head,tail);
    print_linked_list(head);

    

    
    return 0;
}