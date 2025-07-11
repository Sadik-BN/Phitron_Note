#include<stdio.h>

int main()
{
    int a= 5;
    int b= 2;


    float div1 = a/b;
    float div2 = (float)a/b;


    printf("Division= %.2f\n",div1);
    printf("Division= %.2f\n\n\n",div2);


   // printf("Division= %.2f\n",a/b); [Error ashbe karon a,b and a/b integer but format specifier %f.]
    printf("Division= %.2f\n",5.0/2);
    printf("Division= %.2f\n",(float)a/b);

    return 0;
}