#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n,flag=0;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]==a[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}