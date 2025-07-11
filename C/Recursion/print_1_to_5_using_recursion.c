#include<stdio.h>

void f(int x)
{
    printf("%d\n",x);
    if(x==5) //end condition
        return; 
    f(x+1);//increment/decrement
}
int main()
{ 

    f(1);//initialization
    
    return 0;
}