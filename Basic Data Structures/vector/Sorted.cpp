#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }
        int count=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]>=a[j])
            {
                count++;
            } 
        }

        if (count==n-1)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}