#include <bits/stdc++.h>
using namespace std;
int m, n;
char mat[101][101];
bool vis[101][101];
int level[101][101];
vector<pair<int, int>> movement = {{1, 2}, {2, 1}, {-1, 2}, {-2, 1},{1,-2},{2,-1},{-1,-2},{-2,-1}};
bool valid(pair<int, int> pos)
{
    if (pos.first < 0 || pos.first >= m || pos.second < 0 || pos.second >= n)
        return false;
    return true;
}

void bfs(pair<int, int> strt)
{
    queue<pair<int, int>> q;

    q.push(strt);
    vis[strt.first][strt.second] = true;
    level[strt.first][strt.second]+=1;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            pair<int, int> child;
            child.first = parent.first + movement[i].first;
            child.second = parent.second + movement[i].second;

            if (valid(child) && !vis[child.first][child.second])
            {
                q.push(child);
                vis[child.first][child.second] = true;
                level[child.first][child.second] = level[parent.first][parent.second]+1;
            }
        }
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> m >> n;

        pair<int, int> knight, queen;

        cin >> knight.first >> knight.second;
        cin >> queen.first >> queen.second;

        memset(vis, false, sizeof(vis));
        memset(level,-1,sizeof(level));

        bfs(knight);
        cout<<level[queen.first][queen.second]<<endl;
    }

    return 0;
}