#include <bits/stdc++.h>

using namespace std;

const int N = 100;

vector<pair<int, int>> v[N];

int dis[N];

void dijkstra(int src)

{

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    pq.push({0,src});

    dis[src] = 0;

    while (!pq.empty())

    {

        pair<int, int> parent = pq.top();

        pq.pop();

        int dist = parent.first;

        int node = parent.second;

        for (pair<int, int> child : v[node])

        {

            int childNode = child.first;

            int childDist = child.second;

            if (dist + childDist < dis[childNode])

            {

                // path relax

                dis[childNode] = dist + childDist;

                pq.push({dis[childNode],childNode});
            }
        }
    }
}

int main()

{

    int n, e;

    cin >> n >> e;

    while (e--)

    {

        int a, b, c;

        cin >> a >> b >> c;

        v[a].push_back({b, c});

        v[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)

    {

        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)

    {

        cout << i << "-> " << dis[i] << endl;
    }

    return 0;
}