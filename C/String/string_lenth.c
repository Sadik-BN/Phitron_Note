#include<stdio.h>

int main()
{
    
    char c[101];

    scanf("%s",c);
    int count=0;
    for(int i=0;i<101;i++)
    {
        if(c[i]=='\0')
        {
            break;
        }
        count+=1;
    }

    //Or,
    // for(int i=0;c[i]!='\0';i++)
    // {
    //     count+=1;
    // }

    printf("%d",count);
    
    return 0;
}