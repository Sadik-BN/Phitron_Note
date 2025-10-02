#include <bits/stdc++.h>
using namespace std;
bool node_can_be_visitd(int src_node,int destination, int node_number, vector<int> adj_list[])
{
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
        q.pop();
    }

    if (visit[destination]==true)
    {
        return true;
    }
    else
        return false;
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
    int src,dst;
    cin>>src>>dst;
    bool v=node_can_be_visitd(src,dst, n, adj_list);

    if(v==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}