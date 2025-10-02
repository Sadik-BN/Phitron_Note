#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool make_it(int n,int m)
{
    if(m>n)
    {
        return false;
    }
    if(m==n)
    {
        return true;
    }
    if(dp[m]!=-1)
        return dp[m];
    dp[m] = make_it(n,m+3) || make_it(n,m*2) ;
    return dp[m];

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        memset(dp,-1,sizeof(dp));
        if(make_it(n,1))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    
    return 0;
}