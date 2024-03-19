#include <stdio.h>

int main()
{
    int total = 0;
    int n;
    scanf("%d", &n);
    int a[n];
    int pre;
    for (pre = 0; pre < n; pre++)
    {
        scanf("%d", &a[pre]);
    }
    for (pre = 0; pre < n; pre++)
    {
        int b;
        int can = 0;
        for (b = 2; b < a[pre]; b++)
        {
            if (a[pre] % b == 0)
            {
                can++;
            }
        }
        if (can == 0)
        {
            total++;
        }
    }
    printf("%d", total);
    return 0;
}
