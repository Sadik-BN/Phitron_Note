#include <bits/stdc++.h>
using namespace std;

// গ্রাফের adjacency list
vector<int> adj_list[1005];
bool vis[1005];

// DFS ফাংশন: একটি কম্পোনেন্ট explore করবে
void dfs(int src)
{
    vis[src] = true; // node কে ভিজিট করা হলো
    for (int child : adj_list[src]) // src এর প্রতিবেশী child
    {
        if (!vis[child]) // যদি child ভিজিট না হয়ে থাকে
            dfs(child);  // recursive DFS কল
    }
}

int main()
{
    int n, e;
    cin >> n >> e; // n = node সংখ্যা, e = edge সংখ্যা

    // গ্রাফ ইনপুট
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected গ্রাফ, তাই দুই দিকেই সংযোগ
    }

    // সব node কে "অভিজিটেড" false করা হলো
    memset(vis, false, sizeof(vis));

    int cnt = 0; // কম্পোনেন্ট কাউন্টার

    // প্রতিটি node এর জন্য check
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false) // যদি এখনো ভিজিট না করা থাকে
        {
            dfs(i); // নতুন কম্পোনেন্ট explore শুরু
            cnt++;  // একটি নতুন component পাওয়া গেল
        }
    }

    cout << cnt << endl; // মোট কম্পোনেন্ট সংখ্যা আউটপুট

    return 0;
}