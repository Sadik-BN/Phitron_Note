#include <bits/stdc++.h>
using namespace std;
int value[1005];
int weight[1005];
int dp[1005][1005];
int knapsack(int i, int weight_limit)
{
    if (i < 1)
        return 0;
    if (weight_limit <= 0)
        return 0;

    if (dp[i][weight_limit] != -1)
    {
        return dp[i][weight_limit];
    }

    if (weight_limit >= weight[i])
    {
        int opt1 = knapsack(i - 1, weight_limit - weight[i]) + value[i];
        int opt2 = knapsack(i - 1, weight_limit);
        dp[i][weight_limit] = max(opt1, opt2);
        return dp[i][weight_limit];
    }
    else
    {

        int opt = knapsack(i - 1, weight_limit);
        dp[i][weight_limit] = opt;
        return dp[i][weight_limit];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, weight_limit;
        cin >> n;
        cin >> weight_limit;

        for (int i = 1; i <= n; i++)
        {
            cin >> weight[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> value[i];
        }

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= weight_limit; j++)
                dp[i][j] = -1;

        cout << knapsack(n , weight_limit)<<endl;
    }
    return 0;
}