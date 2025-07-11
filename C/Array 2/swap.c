#include<stdio.h>

int main()
{
    
    int a=10,b=20;
    int tmp;
    tmp=a;
    a=b;
    b=tmp;

    printf("A=%d\n",a);
    printf("B=%d",b);
    
    return 0;
}