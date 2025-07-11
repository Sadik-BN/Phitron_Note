#include<stdio.h>

int main()
{
    int a=10;
    printf("a=%d\n",a);
    int*p=&a;
    p[0]=120;
    printf("a=%d\n",a);

    printf("a er adrees ba  p[0] te thaka address -> %p\n",p/*or,&p[0] likhleo hbe*/);
    printf("p[1] e thaka address %p\n",&p[1]);
    printf("p[2] e thaka address %p\n",&p[2]);
    printf("p[3] e thaka address %p\n",&p[3]);
    printf("p[4] e thaka address %p\n",&p[4]);
    
    return 0;
}