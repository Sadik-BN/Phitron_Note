#include<bits/stdc++.h>
using namespace std;
int dp[101];
int fibonacci(int n) //O(n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(dp[n]==-1)
    {
        dp[n]=fibonacci(n-1)+fibonacci(n-2);
        return dp[n];
    }
    else
        return dp[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;

    cout<<fibonacci(n)<<endl;;

    return 0;
}