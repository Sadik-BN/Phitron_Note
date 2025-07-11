#include<stdio.h>
#include<string.h>

int main()
{
    
    char s[101],t[101];
    scanf("%s %s",s,t);
    int lenth_s=strlen(s);
    int lenth_t=strlen(t);


    for (int i = 0; i <=strlen(t); i++)
    {
        s[i+lenth_s] = t[i];//ekhane dirrect strlen use korle kaj korbe na.karon protibar loop e dhukle string er lenth change hoy.
    }
    
    printf("%s",s);

    
    return 0;
}