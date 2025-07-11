#include<stdio.h>

int main()
{
    
    int i,j,n,flag=0;

    int a[5]={2,4,5,10,3};

    int a_size= sizeof(a)/sizeof(a[0]);

    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]+a[i]==n)
            {
                printf("Sum of %d & %d is %d\n",a[i],a[j],n);
                flag=1;
            }
        }
    }

    
    if(flag==0) /*or, flag!=1 ; mane holo compiler ek baro uporer if condition e 
    dhukte pare nai e jnne flag variable er maan ager 0 e roye gese orthat 
    if condition kaj kore nai mane emon kono number pay nai jar jogfol r ek number hbbe.*/
    {
        printf("N/A");
    }
    return 0;
}