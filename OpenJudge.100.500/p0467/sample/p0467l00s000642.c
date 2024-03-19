#include <stdio.h>

int main()
{

    int n[3], i, max = 0;
    int x[3] = {1, 0, -1};
    long k;

    for (i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            scanf("%ld", &k);
        }
        else
            scanf("%d", &n[i]);
        max += n[i];
    }

    if (n[0] >= k)
        printf("%d", k);

    else if (n[0] + n[1] >= k)
    {
        printf("%d", n[0]);
    }
    else
    {
        printf("%d", n[0] - (k - n[0] - n[1]));
    }
    return 0;
}