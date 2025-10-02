#include<bits/stdc++.h>
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
            cout << this->top() ;
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