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

int main()
{
    Node* head=new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c= new Node(40);

    head-> next =a;
    a->next=b;
    b->next=c;

    Node* temp_head=head;
    while (temp_head != NULL)
    {
        cout << temp_head->val<<endl;
        temp_head=temp_head->next;
    } 

    temp_head=head;
    while (temp_head != NULL)
    {
        cout << temp_head->val<<endl;
        temp_head=temp_head->next;
    } 
    

    return 0;
}