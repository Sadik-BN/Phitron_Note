#include<stdio.h>

void f(int x)
{
    
    if(x==6)
        return; 
    f(x+1);

    printf("%d\n",x);
}
int main()
{ 

    f(1);
    
    return 0;
}