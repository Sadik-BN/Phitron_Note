#include <bits/stdc++.h>
using namespace std;

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
    int q;
    cin >> q;
    while (q--)
    {
        int node;
        cin >> node;
        vector<int> v;
        for (int x : adj_list[node])
        {
            v.push_back(x);
        }
        if (!v.empty())
        {
            sort(v.begin(), v.end(), greater<int>());

            for (int x : v)
            {
                cout << x << " ";
            }

            cout << endl;
        }
        else
            cout<<"-1"<<endl;
    }

    return 0;
}