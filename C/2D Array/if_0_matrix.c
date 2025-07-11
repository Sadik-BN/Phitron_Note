#include<stdio.h>

int main()
{
    
    int r,c,flag=1;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
            if(a[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==1)
        printf("zero/null matrix.");
    if(flag==0)
        printf("Not a zero matrix.");
    return 0;
}