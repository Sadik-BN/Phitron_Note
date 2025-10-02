// https://cses.fi/problemset/task/1672/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e, t;
    cin >> n >> e >> t;

    long long int mat[n+5][n+5];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                mat[i][j] = 0;
            else
                mat[i][j] = LLONG_MAX;
        }
    }

    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        if(c <mat[a][b])
            mat[a][b] = c;
        if(c<mat[b][a])
            mat[b][a] = c;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (mat[i][k] != LLONG_MAX && mat[k][j] != LLONG_MAX && mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (mat[a][b] == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << mat[a][b] << endl;
    }
    return 0;
}
