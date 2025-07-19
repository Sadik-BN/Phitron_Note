#include<bits/stdc++.h>
 using namespace std;

int main()
{ 
    vector <int> l={10,20,30};
    auto itr= l.begin();
    l.insert(l+2,100);
    for(auto it = l.begin();it!=l.end();it++)
    {
        cout << *it << endl;

    }

    return 0;
}