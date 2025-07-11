#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n,q;

    cin >> n >> q ;

    vector<long long> a(n+1);
    vector<long long> a2(n+1,0);


    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        
        

    }
    a2[1]=a[1];
    for(int i =2;i<=n;i++)
    {
        a2[i]=a[i]+a2[i-1];
    }
    for( ;q--;)
    {
        int l,r;
        long long s;
        cin >>l>>r;

        

        if(l==1)
        {
            s=a2[r];
        }
        else
        {
            s= a2[r]-a2[l-1];
        }
        cout << s << endl;


    }
    
    return 0;
}