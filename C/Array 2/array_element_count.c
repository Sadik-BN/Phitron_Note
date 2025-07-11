#include <stdio.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int j = 0; j <= max; j++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (j == a[i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            continue;
        }

        printf("%d ache %d bar\n", j, count);
    }

    return 0;
}