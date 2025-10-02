#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
bool path_visited[N];
bool cycle;
void dfs(int src)
{
    vis[src] = true;
    path_visited[src]=true;
    // cout << parent << endl;
    for (int child : adj[src])
    {
        if (vis[child] == true && path_visited[child]==true)
        {
            cycle = true;
    
        }
        if (vis[child] == false)
        {
        
            dfs(child);
        }
        
    }
    path_visited[src]=false;
    
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        
    }
    memset(vis, false, sizeof(vis));
    memset(path_visited,false,sizeof(path_visited));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (cycle)
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";
    return 0;
}