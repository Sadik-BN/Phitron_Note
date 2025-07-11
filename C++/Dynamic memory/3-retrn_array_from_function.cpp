#include<bits/stdc++.h>

using namespace std;
int* f()
{
    int* pointer = new int[5];
    
    for(int i=0;i<5;i++)
    {
        cin >> pointer[i];
    }

    return pointer;
}
int main()
{
    
    int* a=f();

    for(int i=0 ; i<5 ;i++)
    {
        cout << a[i] <<" ";
    }

    return 0;
}