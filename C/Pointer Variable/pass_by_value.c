#include<stdio.h>
void fun(int x)
{
    x=20;
    printf("fun function er x -> %d\n",x);
}

int main()
{
    
    int x=10;
    
    fun(x);

    printf("main funtion er x-> %d",x);
    
    return 0;
}