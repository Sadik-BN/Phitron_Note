#include <bits/stdc++.h>
using namespace std;
char arr[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m, rec_cnt;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    rec_cnt++;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '#')
            {
                vis[i][j] = true;
            }
        }
    }

    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == false)
            {
                rec_cnt = 0;
                dfs(i, j);
                v.push_back(rec_cnt);
                cnt++;
            }
        }
    }
    if (v.empty())
    {
        cout << 0;
    }
    else
    {
        sort(v.begin(), v.end());
        for (int x : v)
            cout << x << " ";
    }
    return 0;
}