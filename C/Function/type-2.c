//return + no parameter

#include<stdio.h>

int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int z=x+y;
    return z;
}
int main()
{
    int s;

    s=sum();

    printf("%d",s);
    
    return 0;
}