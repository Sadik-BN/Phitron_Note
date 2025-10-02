#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    // adj_matrix setup
    int adj_mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 0;
            }
            else
            {
                adj_mat[i][j] = INT_MAX;
            }
        }
    }

    // input
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(c<adj_mat[a][b]) 
            adj_mat[a][b] = c;

//      if(c<adj_mat[b][a])     
//          adj_mat[b][a] = c;  //for undirected graph.
        
    }

    // Floyd-Warshal
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    // Negative weighted cycle detection
    bool cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (adj_mat[i][i] != 0)
        {
            cycle = true;
        }
    }
    if (cycle)
        cout << "Negative weighted cycle detected" << endl;
    else
    {
        //output
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj_mat[i][j] == INT_MAX)
                {
                    cout << "inf" << " ";
                }
                else
                {
                    cout << adj_mat[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}