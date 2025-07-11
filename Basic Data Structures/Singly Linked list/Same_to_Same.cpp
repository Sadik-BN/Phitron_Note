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

void node_insert_t(Node* &head,Node* &tail,int val)
{
    Node* insertable_node = new Node(val);

    if(head == NULL)
    {
        head= insertable_node;
        tail= insertable_node;
        return;
    }

    tail->next=insertable_node;
    tail=insertable_node;
}
int size(Node* head) 
{
    int count = 0;
    while (head != NULL) 
    {
        count++;
        head = head->next;
    }
    return count;
}


int main()
{
    int val1,val2;
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    while(true)
    {
        cin >> val1;

        if(val1 == -1)
        {
            break;
        }

        node_insert_t(head1,tail1,val1);
    }

    while(true)
    {
        cin >> val2;

        if(val2 == -1)
        {
            break;
        }

        node_insert_t(head2,tail2,val2);
    }

    bool flag=true;
    Node* i=head1;
    Node* j=head2;
    while(i!=NULL)
    {
        if((i->val!=j->val)||(size(head1)!=size(head2)))
        {
            flag=false;
            break;
        }
        i=i->next;
        j=j->next;
    }

    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
     
    return 0;
}