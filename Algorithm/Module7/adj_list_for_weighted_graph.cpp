#include <bits/stdc++.h>

using namespace std;


int main()

{

    int n, e;

    cin >> n >> e;
    vector<pair<int,int>> v[n];
    while (e--)

    {

        int a, b, c;

        cin >> a >> b >> c;

        v[a].push_back({b, c});

        v[b].push_back({a, c});
    }

    for (int i=0;i<n;i++)
    {
        for(auto p:v[i])
        {
            cout<< i<<" to "<<p.first<<" distance "<< p.second<<endl;
        }
    }

    return 0;
}