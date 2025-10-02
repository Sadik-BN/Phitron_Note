#include<bits/stdc++.h>
 using namespace std;

int main()
{
    stack<int> st;
    int size;
    cin >> size;

    //input
    for(int i=1; i<=size;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    //output
    while(!st.empty())
    {
        
        cout<< st.top() << endl;
        st.pop();
    }
    return 0;
}