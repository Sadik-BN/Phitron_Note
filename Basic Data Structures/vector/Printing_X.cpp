#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n,u,d;

    cin >> n;

    u=(n/2);
    d=(n/2);

    int spc=n-2;

    for (int i = 1; i <= u; i++)
    {
        for(int j=1 ; j<=i-1;j++)
        {
            cout << " ";
        }
        cout << "\\";
        for(int j=1;j<=spc;j++)
        {
            cout << " " ;
        }
        
        cout << "/";

        spc-=2;
        cout << endl;
    }
    for(int i=1;i<=u;i++)
    cout << " " ;
    cout << "X" << endl;

    int spc1=d-1,spc2=1;

    for (int i = 1; i <= d; i++)
    {
        for (int j = 1;j <= spc1; j++)
        {
            cout<<" ";
        }
        cout << "/";
        for(int j=1; j<= spc2;j++)
        {
            cout << " ";
        }
        cout << "\\";

        spc1--;
        spc2+=2;
        cout << endl;
    }
    

    return 0;
}