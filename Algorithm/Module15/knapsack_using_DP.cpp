#include<bits/stdc++.h>
using namespace std;
int value[1001];
int weight[1001];
int dp[1001][1001];
int knapsack(int i, int weight_limit)
{
    //base case
    if(i<0)
        return 0;
    if(weight_limit<=0)
        return 0;

    if(dp[i][weight_limit] != -1)
    {
        return dp[i][weight_limit];
    }

    if(weight_limit>=weight[i])
    {
        int opt1=knapsack(i-1,weight_limit- weight[i]) + value[i];
        int opt2=knapsack(i-1,weight_limit);
        dp[i][weight_limit]= max(opt1,opt2);
        return dp[i][weight_limit];
    }
    else
    {
        
        int opt=knapsack(i-1,weight_limit);
        dp[i][weight_limit]=opt;
        return dp[i][weight_limit];
    }
}
int main()
{
    int n,weight_limit;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }

    cin>>weight_limit;

    //setting dp[][] to -1
    for(int i=0 ;i<=n;i++)
        for(int j=0;j<=weight_limit;j++)
            dp[i][j]=-1;

    cout<<knapsack(n-1,weight_limit);

    return 0;
}