#include <bits/stdc++.h>
using namespace std;
int shortest_way(int src_node, int destination, int node_number, vector<int> adj_list[])
{
    bool visit[node_number];
    int level[node_number];
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    queue<int> q;
    q.push(src_node);
    visit[src_node] = true;
    level[src_node] = 0;
    while (q.empty() != true)
    {

        for (int x : adj_list[q.front()])
        {
            if (visit[x] == false)
            {
                q.push(x);
                visit[x] = true;
                level[x] = level[q.front()] + 1;
            }
        }
        q.pop();
    }

    return level[destination];
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
    int src, dst;
    cin >> src >> dst;

    cout << shortest_way(src, dst, n, adj_list) << endl;
    return 0;
}