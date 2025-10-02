#include <bits/stdc++.h>
using namespace std;
bool visited[105];
int parent[105];
bool cycle;
vector<vector<int>> adj_list(105);

void BFS(int src)
{
    queue<int> q;
    if(!visited[src])
    {
        q.push(src);
        visited[src] = true;
    }
    while (!q.empty())
    {

        for (int child : adj_list[q.front()])
        {
            if(visited[child] && child != parent[q.front()])
            {
                cycle=true;
            }
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child]=q.front();
            }

        }

        q.pop();
    }
}
int main()
{
    int n, e;

    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(parent,-1,sizeof(parent));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            BFS(i);
        }

    }
    if(cycle)
        cout<<"Cycle detected";
    else
        cout<<"No Cycle";
    return 0;
}