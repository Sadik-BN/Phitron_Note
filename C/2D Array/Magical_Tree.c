#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int n1 = 6 + ((n - 1) / 2);

    int space = n1 - 1;
    int star = 1;

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star += 2;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int i = 1; i <= 5; i++)
        {
            printf(" ");
        }

        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}