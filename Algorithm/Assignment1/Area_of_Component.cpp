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
int cnt=0;
void bfs(pair<int,int> strt)
{
    queue<pair<int,int>> q;

    q.push(strt);
    vis[strt.first][strt.second]=true;
    cnt++;
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
                cnt++;
            }
        }
        
    }


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


    memset(vis,false,sizeof(vis));
    
    list<int> min_cnt;
    min_cnt.push_back(INT_MAX);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            pair<int,int> src;
            src.first=i;
            src.second=j;
            if(valid(src) && !vis[src.first][src.second] && mat[src.first][src.second]!='-')
            {
                bfs(src);
                if(cnt<=min_cnt.front())
                {
                    min_cnt.push_front(cnt);
                }
                else
                    min_cnt.push_back(cnt);
            }
            cnt=0;
        }
    }
    if(min_cnt.front()==INT_MAX)
        cout<<-1<<endl;
    else
        cout<<min_cnt.front()<<endl;

    return 0;
}