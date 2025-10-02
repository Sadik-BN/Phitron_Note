#include <bits/stdc++.h>
using namespace std;
bool vis[1000][1000];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char arr[1000][1000];
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj,int di,int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false && arr[ci][cj]!='#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
    if(vis[di][dj])
        cout<<"YES"<<endl;
    else
        cout <<"NO"<<endl;
}
int main()
{
    cin >> n >> m;
    int si, sj,di,dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]=='A')
            {
                si=i;
                sj=j;
            }
            if(arr[i][j]=='B')
            {
                di=i;
                dj=j;
            }
        }
    }
    
    memset(vis, false, sizeof(vis));
    bfs(si, sj,di,dj);

    return 0;
}
