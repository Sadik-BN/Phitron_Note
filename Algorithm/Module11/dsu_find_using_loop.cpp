#include<bits/stdc++.h>
using namespace std;
int par[1001];
int dsu_find(int node)
{
    while(par[node]!=-1)
    {
        node=par[node];
    }
    return node;
}
int main()
{
    memset(par,-1,sizeof(par));

    par[0]=1;
    par[2]=1;
    par[3]=1;
    par[4]=5;
    par[5]=3;

    for(int i=0;i<6;i++)
    {
        cout<< "parent of "<< i <<" -> "<< dsu_find(i)<<endl;
    }
    return 0;
}