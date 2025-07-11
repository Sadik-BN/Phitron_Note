#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> pre(n,0);
    pre[0]=a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i]=pre[i-1]+a[i];
    }

    for (int i = n-1; i>=0 ; i--)
    {
        cout<< pre[i] << " " ;
    }
    
    
    
    return 0;
}