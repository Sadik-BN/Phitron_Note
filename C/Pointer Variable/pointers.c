#include<stdio.h>

int main()
{
    
    int a =10,b,c;
    printf("Value -> %d\n",a);

    printf("Location a -> %p \n",&a);

    //pointer variable

    int* ptr;
    ptr=&a;

    printf("Location a -> %p\n",ptr);

    printf("Location ptr -> %p \n",&ptr);

    return 0;
}