#include<stdio.h>

int main()
{
    
    int a[5]={10,20,30,40,50};
    int* pointer[5];
    
    for(int i=0;i<5;i++)
    {
        pointer[i]= &a[i];
        printf("%p\n",pointer[i]);
    }
    // array er each element 4byte space ney. single ekta byte er jnne memory er hexadecimal address number 1 kore bare
    

    // Array nijey ekta pointer.So, array te ekta memory adress save thake.
    printf("Array 'a' te save thaka address %p\n",a);
    printf("Ja array 'a' er first element er address.\n");
    return 0;
}