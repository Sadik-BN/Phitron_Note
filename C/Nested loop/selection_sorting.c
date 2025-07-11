#include<stdio.h>

int main()
{
    
    int i,j,a[4]={20,40,10,30},temp;
        //ascending
    for ( i = 0; i <=2; i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
    
    //descending
        for ( i = 0; i <=2; i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
        for (i = 0; i < 4; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}