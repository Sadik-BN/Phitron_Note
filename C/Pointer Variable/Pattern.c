#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, space, character;
    scanf("%d", &n);
    space = n - 1;
    character = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= character; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        space--;
        character += 2;
        printf("\n");
    }

    space = 1;
    character = (2 * n) - 3;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= character; j++)
        {
            if (n % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
        }
        space++;
        character -= 2;
        printf("\n");
    }

    return 0;
}
