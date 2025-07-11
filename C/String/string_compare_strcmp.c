#include <stdio.h>

int main()
{

    char s[101], t[101];

    scanf("%s %s", s, t);

    if (strcmp(s,t)<0)
    {
        printf("%s\n%s\n", s, t);
        
    }
    else if (strcmp(s,t)>0)
    {
        printf("%s\n%s\n", t, s);
        
    }
    else if (strcmp(s,t)==0)
    {
        printf("Both same string.nothing to compare");
        
    }

    return 0;
}    
