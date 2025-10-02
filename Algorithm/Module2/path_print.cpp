#include <bits/stdc++.h>
using namespace std;
void path(int src_node, int destination, int node_number, vector<int> adj_list[])
{
    bool visit[node_number];
    int level[node_number];
    int parent[node_number];
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    queue<int> q;
    q.push(src_node);
    visit[src_node] = true;
    level[src_node] = 0;
    parent[src_node] = -1; // memset e -1 set kora ase tai ei line na likhleo hbe
    while (q.empty() != true)
    {

        for (int x : adj_list[q.front()])
        {
            if (visit[x] == false)
            {
                q.push(x);
                visit[x] = true;
                level[x] = level[q.front()] + 1;
                parent[x] = q.front();
            }
        }
        q.pop();
    }
    // path printing
    int node = destination;
    stack<int> p;
    while (node != -1)
    {
        p.push(node);
        node = parent[node];
    }
    while (p.empty() != true)
    {
        cout << p.top() << endl;
        p.pop();
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
    int src, dst;
    cin >> src >> dst;

    path(src, dst, n, adj_list);

    return 0;
}