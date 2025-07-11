#include<stdio.h>

int main()
{
    
    int n,m;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }

    int c[m+n];

    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        c[i+n]=b[i];
    }

    for (int i = 0; i < (m+n); i++)
    {
        printf("%d ",c[i]);
    }
    
    
    
    
    return 0;
}