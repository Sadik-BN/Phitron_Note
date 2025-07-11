                    //Khatar 6 ta case onujayi 

// #include<stdio.h>

// int main()
// {
    
//     char s[101],t[101];

//     scanf("%s %s",s,t);
    
//     for (int i = 0;1; i++)
//     {
//         if(s[i]<t[i])
//         {
//             printf("%s\n%s\n",s,t);
//             break;
//         }
//         else if(t[i]<s[i])
//         {
//             printf("%s\n%s\n",t,s);
//             break;
//         }
//         else if (s[i]=='\0' && t[i]=='\0')
//         {
//             printf("Both same string.nothing to compare");
//             break;
//         }
            /*last 2 ta if-else ladder na dileo chole 
            karon null sobar cheye choto ascii value. 
            er condition 1st 2 ta ladder e pass kore jay*/
//         else if (s[i]=='\0')
//         {
//             printf("%s %s",s,t);
//             break;
//         }
//         else if (t[i]=='\0')
//         {
//             printf("%s %s",t,s);
//             break;
//         }

        
//     }
    
//     return 0;
// }







                //nijer logic
#include<stdio.h>

int main()
{
    
    char s[101],t[101];

    scanf("%s %s",s,t);
    int n;
    if(strlen(s)>=strlen(t))
    {
        n=strlen(s);
    }
    else
    {
         n=strlen(t);
    }
//ekhane if else diye highest string lenth ta 'n' e save kora holo
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]<t[i])
        {
            printf("%s\n%s\n",s,t);
            break;
        }
        else if(t[i]<s[i])
        {
            printf("%s\n%s\n",t,s);
            break;
        }
        c++;//c holo count korbe loop ta koybar ghureche.
    }

    if(strlen(s)==c && strlen(t)==c) //s er lenth= t er lenth= c(loop je koybar ghurbe)
    {                                //ei 3 ta term shoman mane 2 ta string e same to same
        printf("both are same string.nothing to compare");
    }
    
    return 0;
}



