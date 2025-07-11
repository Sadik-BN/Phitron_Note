#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (q--)
    {
        int l = 0, r = n - 1, x, flag = 0;
        cin >> x;
        while (r >= l)
        {
            int mid = (l + r) / 2;

            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (x > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}