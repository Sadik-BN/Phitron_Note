#include<stdio.h>

void f(int x)
{
    printf("%d\n",x);
    if(x==1) //end condition
        return; 
    f(x-1);//increment/decrement
}
int main()
{ 

    f(5);//initialization
    
    return 0;
}