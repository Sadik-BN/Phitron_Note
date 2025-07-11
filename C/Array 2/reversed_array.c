#include<stdio.h>

int main()
{
    
    int n,tmp,x;
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }

     if (n%2==0)
     {
        x=n/2;
     }
     else
     {
        x=(n/2)+1;
     }

     for(int i=0;i<x;i++)
     {
        tmp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=tmp;
     }
     for(int i=0;i<n;i++)
     {
        printf("%d ",a[i]);
     }

     
    
    return 0;
}