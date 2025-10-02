#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e ;

    int mat[n+5][n+5];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                mat[i][j] = 0;
            else
                mat[i][j] = INT_MAX;
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(c <mat[a][b])
            mat[a][b] = c;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (mat[i][k] != INT_MAX && mat[k][j] != INT_MAX && mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (mat[a][b] == INT_MAX)
            cout << -1 << endl;
        else
            cout << mat[a][b] << endl;
    }
    return 0;
}
