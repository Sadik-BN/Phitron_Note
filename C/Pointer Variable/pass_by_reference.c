#include<stdio.h>

void fun(int* a)
{
    *a=20;
}
int main()
{
    int a=10;

    fun(&a);

    printf("Main function er a er value jeta fun function e pass by reference er maddhome change hoye -> %d hoyeche",a);
    
    
    return 0;
}