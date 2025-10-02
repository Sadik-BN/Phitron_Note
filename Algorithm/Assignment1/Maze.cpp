#include <bits/stdc++.h>
using namespace std;
int n, m;
char arr[1001][1001];
bool vis[1001][1001];
int level[1001][1001];
pair<int, int> parent[1001][1001];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(pair<int, int> src, pair<int, int> dst)
{
    queue<pair<int, int>> q;

    q.push(src);
    vis[src.first][src.second] = true;
    level[src.first][src.second] = 0;
    parent[src.first][src.second] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            pair<int, int> child;
            child.first = par.first + d[i].first;
            child.second = par.second + d[i].second;
            if (valid(child.first, child.second) == true && vis[child.first][child.second] == false)
            {
                q.push(child);
                vis[child.first][child.second] = true;
                level[child.first][child.second] = level[par.first][par.second] + 1;
                parent[child.first][child.second] = par;
            }
        }
    }
    if (vis[dst.first][dst.second])
    {
        pair<int,int> node=parent[dst.first][dst.second];
        while(arr[node.first][node.second]!='R')
        {
            arr[node.first][node.second] = 'X';
            node=parent[node.first][node.second];
        }
    }
}

int main()
{

    cin >> n >> m;
    pair<int, int> src, dst;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '#')
            {
                vis[i][j] = true;
            }
            if (arr[i][j] == 'R')
            {
                src.first = i;
                src.second = j;
            }
            if (arr[i][j] == 'D')
            {
                dst.first = i;
                dst.second = j;
            }
        }
    }

    bfs(src, dst);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}