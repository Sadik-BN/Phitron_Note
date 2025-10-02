#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[101];

    arr[1]=0;
    arr[2]=1;

    for(int i=3;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<arr[n]<<endl;

    return 0;
}