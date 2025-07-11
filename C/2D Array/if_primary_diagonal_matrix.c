#include<stdio.h>
#include<stdbool.h>

int main()
{
    
    int r,c;
    bool is_diagonal=true;//flag variable in a understandable way.
    
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i][j]!=0)
            {
                is_diagonal=false;
            }
        }        
    }


    if(is_diagonal==true && r==c)
        printf("Primary diagonal matrix.");
    else
        printf("Not a primary diagonal matrix.");

    return 0;
}