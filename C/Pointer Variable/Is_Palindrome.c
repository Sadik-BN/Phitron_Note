#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char S[])
{   
    int count=0;
    for(int i=0,j=strlen(S)-1;j>i;i++,j--)
    {
        if(S[i]==S[j])
        {
            count++;
        }
    }
    if(strlen(S)/2==count || strlen(S)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {

    char S[1001] ;
    scanf("%s",S);
    
    if(is_palindrome(S)==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
        
    return 0;
}
