#include<bits/stdc++.h>
 using namespace std;

int main()
{
    list<int> l;
    int val ;
    while(true)
    {
        cin >> val;
        if(val == -1)
            break;
        l.push_back(val);
    }

    l.sort();

    l.unique();

    for(int v : l)
    {
        cout<< v <<" ";
    }

    return 0;
}