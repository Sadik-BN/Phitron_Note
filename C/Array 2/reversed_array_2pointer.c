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
    
     int i=0,j=n-1;
     while(i<j)
     {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
        i++;
        j--;
     }
     
     //Using for loop:-

    //  for(int i=0,j=n-1;i<j;i++,j--)
    //  {
    //     tmp=a[i];
    //     a[i]=a[j];
    //     a[j]=tmp;
    //  }

     for(int i=0;i<n;i++)
     {
        printf("%d ",a[i]);
     }

     
    
    return 0;
}