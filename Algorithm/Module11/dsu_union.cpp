#include<bits/stdc++.h>
using namespace std;
int leader_of[1001];
int grp_size[1001];

int dsu_find(int node)
{
    if(leader_of[node]==-1)
    {
        return node;
    }
    int leader = dsu_find(leader_of[node]);
    leader_of[node]=leader;
        return leader;
} 
void dsu_union(int node1,int node2)
{
    int leader1=dsu_find(node1);
    int leader2=dsu_find(node2);
    if(grp_size[leader1]>=grp_size[leader2])
    {
        leader_of[leader2]=leader1;
        grp_size[leader1]+=grp_size[leader2];
    }
    else
    {
        leader_of[leader1]=leader2;
        grp_size[leader2]+=grp_size[leader1];
    }
}
main()
{
    memset(leader_of,-1,sizeof(leader_of));
    memset(grp_size,1,sizeof(grp_size));

    dsu_union(0,1);    
    dsu_union(3,5);
    dsu_union(4,5);
    dsu_union(6,5);
    dsu_union(3,1);
    dsu_union(0,2);

    for(int i=0;i<7;i++)
    {
        cout<< i<<" -> " <<leader_of[i]<<endl;
    }

    return 0;
}