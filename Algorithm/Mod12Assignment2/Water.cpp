#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];

        int piller1=INT_MIN;
        int piller2=INT_MIN;
        int idx1,idx2;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>piller1)
            {
                piller2=piller1;
                idx2=idx1;
                piller1=arr[i];
                idx1=i;
            }
            if(arr[i]>piller2&&arr[i]<piller1)
            {
                piller2=arr[i];
                idx2=i;
            }
        }

        cout<<min(idx1,idx2)<<" "<<max(idx1,idx2)<<endl;

    }
    return 0;
}