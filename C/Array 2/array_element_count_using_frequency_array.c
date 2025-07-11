#include <stdio.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int freq[6] = {0}; // frequency array er size hobe input array er highest value onujayi
    // ekhane array size 6 tar mane highest value 5 er jnne eta kaj korbe
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        freq[val]++; // uporer line na likhe freq[a[i]]++ lekha jabe.
        // or, freq[a[i]]++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ache %d bar\n", i, freq[i]);
    }

    return 0;
}