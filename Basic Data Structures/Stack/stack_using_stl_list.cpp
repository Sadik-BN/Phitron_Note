#include<bits/stdc++.h>
 using namespace std;
class Stack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        if (!l.empty())
        {
            l.pop_back();
        }
    }

    int top()
    {

        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }

    void top_print()
    {
        if (!l.empty())
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
    return 0;
}