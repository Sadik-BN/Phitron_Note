//return + parameter

#include<stdio.h>

int sum(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int a,b,s;
    scanf("%d %d",&a,&b);

    s=sum(a,b);

    printf("%d",s);
    
    return 0;
}