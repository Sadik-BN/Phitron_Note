#include<bits/stdc++.h>

using namespace std;

int main()
{
    int* pointer = new int[5];
    
    for(int i=0;i<5;i++)
    {
        cin >> pointer[i];
    }

    for(int i=0 ; i<5 ;i++)
    {
        cout << pointer[i] <<" ";
    }

    return 0;
}