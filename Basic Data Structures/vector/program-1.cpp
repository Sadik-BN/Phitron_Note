#include<bits/stdc++.h>
 using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5};

    auto ptr = v.begin();

    cout << &(*ptr) << endl;
    cout << &v[0];

    return 0;
}