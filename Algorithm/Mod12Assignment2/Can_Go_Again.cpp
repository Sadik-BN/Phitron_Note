#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int n, e;
long long path[100005];
vector<Edge> graph;

void can_go(int src, int t)
{
    for (int i = 1; i <= n; i++)
    {
        path[i] = LLONG_MAX;
    }
    path[src] = 0;

    for (int i = 0; i < n - 1; i++)
    {

        for (auto edge : graph)
        {
            int a = edge.a;
            int b = edge.b;
            int c = edge.c;

            if (path[a] != LLONG_MAX && path[a] + c < path[b])
            {
                path[b] = path[a] + c;
            }
        }
    }

    bool cycle = false;
    for (auto edge : graph)
    {
        int a = edge.a;
        int b = edge.b;
        int c = edge.c;

        if (path[a] != LLONG_MAX && path[a] + c < path[b])
        {
            cycle = true;
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            int node;
            cin >> node;
            if (path[node] == LLONG_MAX)
                cout << "Not Possible" << endl;
            else
                cout << path[node] << endl;
        }
    }
}
int main()
{
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph.push_back(Edge(a, b, c));
    }

    int src, t;
    cin >> src >> t;

    can_go(src, t);

    return 0;
}