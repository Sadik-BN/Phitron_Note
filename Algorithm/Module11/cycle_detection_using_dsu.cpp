#include <bits/stdc++.h>
using namespace std;
int leader_of[1001];
int grp_size[1001];
bool cycle = false;

int dsu_find(int node)
{
    if (leader_of[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(leader_of[node]);
    leader_of[node] = leader;
    return leader;
}
void dsu_union_cycle_detect(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
    if (leader1 == leader2)
    {
        cycle = true;
        return;
    }
    if (grp_size[leader1] >= grp_size[leader2])
    {
        leader_of[leader2] = leader1;
        grp_size[leader1] += grp_size[leader2];
    }
    else
    {
        leader_of[leader1] = leader2;
        grp_size[leader2] += grp_size[leader1];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    memset(leader_of, -1, sizeof(leader_of));
    memset(grp_size, 1, sizeof(grp_size));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        dsu_union_cycle_detect(a, b);
    }
    if (cycle)
        cout << "cycle detected" << endl;
    else
        cout << "NO cycle" << endl;
    return 0;
}