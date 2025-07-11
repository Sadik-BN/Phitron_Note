#include<stdio.h>

int main()
{
    
    int a=10;


    int* pointer=&a;//created a pointer variable named "pointer" for 'a' variable.

    printf("Printing value of 'a' variable through pointer variable -> %d\n",*pointer);

    *pointer=200; //changed value of 'a' varible through pointer variable.

    printf("Printing changed value through pointer variable of 'a' variable  -> %d\n",a);
    
    return 0;
}