#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0; i<n; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    
    return 0;
}