#include<stdio.h>
int fun(int x[])
{
    x[1]=800;//main() er array er 1th index er value change kore dibe. f
    printf("Fun Function array, x[] address %p\n",x);

    return x;
}

int main()
{
    
    int a[5]={10,20,30,40,50};
    printf("Main Function array, a[5] address %p\n",a);

    fun(a);

    for(int i=0; i<5;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}