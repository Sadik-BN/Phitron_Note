// no return + parameter

#include <stdio.h>

void sum(int x, int y)
{
    int z=x+y;
    printf("%d", z);
    return;// void function kisu return kore na but sudhu return likhle funtion okhanei stop hoye main funtion e return kore . onekta loop er break keyword er moto kaj kore.
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    return 0;
}