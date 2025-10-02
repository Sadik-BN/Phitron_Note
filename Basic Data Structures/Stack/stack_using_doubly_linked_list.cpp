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
void delete_from_tail(Node *&head, Node *&tail)
{
    if (tail == NULL)
    {
        head=NULL;
        return;
    }
    if (tail->prev == NULL)
    {
        Node *del_node = tail;

        head = NULL;
        tail = NULL;

        delete del_node;

        return;
    }

    Node *del_node = tail;

    tail->prev->next = NULL;
    tail = tail->prev;

    delete del_node;
}
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
class Stack
{
public:

    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val)
    {
        insert_at_tail(head,tail,val);
        ++sz;
    }

    void pop()
    {
        delete_from_tail(head,tail);
        --sz;
    }

    int top()
    {

        return tail->val;
    }

    int size()
    {
        return sz;//tracked the size in each push and pop back function in sz variable by increasing and decreasing sz by 1.
                  //So that, complexity is now O(1)
    }

    bool empty()
    {
        if(head==NULL && tail == NULL)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    void top_print()
    {
        if (!this->empty())
        {
            cout << this->top();
        }
    }
};


int main()
{
    int size;
    cin >> size;
    Stack st;

    //input
    for(int i=1; i<=size;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    //output
    for(int i=1;i<=size;i++)
    {
        st.top_print();
        cout<< endl;
        st.pop();
    }
    cout <<"Size "<< st.size();
    return 0;
}