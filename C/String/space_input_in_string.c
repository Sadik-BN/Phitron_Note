#include<stdio.h>

int main()
{
    
    char s[50];
    gets(s);
    printf("%s\n",s);

    fgets(s,50,stdin);
    printf("%s",s);
    
    return 0;
}