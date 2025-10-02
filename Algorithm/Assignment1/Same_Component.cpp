#include<bits/stdc++.h>
using namespace std;
int m,n;
char mat[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> movement={{1,0},{0,1},{-1,0},{0,-1}};
bool valid(pair<int,int> pos)
{
    if(pos.first<0||pos.first>=m||pos.second<0||pos.second>=n)
        return false;
    return true;
}

void bfs(pair<int,int> strt,pair<int,int> dst)
{
    queue<pair<int,int>> q;

    q.push(strt);
    vis[strt.first][strt.second]=true;

    while(!q.empty())
    {
        pair<int,int> parent=q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            pair<int,int>child;
            child.first= parent.first + movement[i].first;
            child.second= parent.second + movement[i].second;

            if(valid(child) && !vis[child.first][child.second] && mat[child.first][child.second]!='-')
            {
                q.push(child);
                vis[child.first][child.second]=true;
            }
        }
        
    }
    if(vis[dst.first][dst.second])
        cout<<"YES"<<endl;
    else
        cout <<"NO"<<endl;

}
int main()
{
    
    cin >>m>>n;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

            cin>>mat[i][j];
        }
    }

    pair<int,int> strt,dst;

    cin>>strt.first>>strt.second;
    cin>>dst.first>>dst.second;

    memset(vis,false,sizeof(vis));

    bfs(strt,dst);

    return 0;
}