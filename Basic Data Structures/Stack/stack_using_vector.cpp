#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        if (!v.empty())
        {
            v.pop_back();
        }
    }

    int top()
    {

        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }

    void top_print()
    {
        if (!v.empty())
        {
            cout << this->top() << endl;
        }
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);


    st.top_print();

    cout << "Pop start" << endl;
    st.pop();
    st.top_print();
    st.pop();
    st.top_print();
    st.pop();
    st.top_print();


    return 0;
}