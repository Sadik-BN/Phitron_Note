#include<stdio.h>

int main()
{
    
    char s[101],t[101];

    scanf("%s %s",s,t);

    strcpy(s,t);
    
    printf("%s %s",s,t);
    
    return 0;
}