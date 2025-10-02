#include <bits/stdc++.h>
using namespace std;
void insert_in_Maxheap(vector<int> &a, int val)
{
    a.push_back(val);

    int cur_idx = a.size() - 1;

    while (true)
    {
        if (cur_idx == 0)
            break;
        int par_idx = (cur_idx - 1) / 2;
        if (a[cur_idx] > a[par_idx])
        {
            swap(a[par_idx], a[cur_idx]);
        }
        else
            break;

        cur_idx = par_idx;
    }

    // mycode

    // a.push_back(val);
    // int cur_idx=a.size()-1;
    // int par_idx=(cur_idx-1)/2;
    // while(a[cur_idx]>a[par_idx])
    // {
    //     swap(a[par_idx],a[cur_idx]);
    //     cur_idx=par_idx;
    //     par_idx=(cur_idx-1)/2;
    // }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;

    insert_in_Maxheap(a, val);

    insert_in_Maxheap(a, 27);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}