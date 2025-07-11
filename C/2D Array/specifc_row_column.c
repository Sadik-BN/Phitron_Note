#include<stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }


    //input a specific row number to print
    int n;
    scanf("%d",&n);
    for(int i=0;i<c;i++)
    {
        printf("%d ",a[n][i]);
    }
    printf("\n\n");


    //taking input a specific column number to print
    int m;
    scanf("%d",&m);
    for(int i=0;i<r;i++)
    {
        printf("%d ",a[i][m]);
        printf("\n");
    }
    
    return 0;
} 