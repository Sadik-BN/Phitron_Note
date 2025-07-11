#include<bits/stdc++.h> //master header file 

using namespace std;

int main()
{
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    cout << min({a,b,c,d}) << endl;

    cout << max({a,b,c,d}) << endl;

    swap(a,d);

    cout << a <<" "<< d << endl;

    return 0;
}