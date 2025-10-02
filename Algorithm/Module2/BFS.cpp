#include <bits/stdc++.h>
using namespace std;
void bfs(int src_node, int node_number, vector<int> adj_list[])
{
    // bool visit[node_number] = {false};
    // or,
    bool visit[node_number];
    memset(visit,false,sizeof(visit));
    queue<int> q;
    q.push(src_node);
    visit[src_node]=true;
    while (q.empty() != true)
    {

        for (int x : adj_list[q.front()])
        {
            if (visit[x] == false)
            {
                q.push(x);
                visit[x]=true;
            }
        }

        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    bfs(0, n, adj_list);
    return 0;
}