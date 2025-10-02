#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited[1005];

void dsf(int src)
{
    cout<<src<<" ";
    visited[src]=true;
    for(int x : adj_list[src])
    {
        if(!visited[x])
        {
            dsf(x);
        }
    }

}
int main()
{
    int n,e;
    cin>> n>>e;
    while(e--)
    {
        int p,q;
        cin >> p>> q;

        adj_list[p].push_back(q);
        adj_list[q].push_back(p);
    }
    memset(visited,false,sizeof(visited));

    dsf(0);

    return 0;
}