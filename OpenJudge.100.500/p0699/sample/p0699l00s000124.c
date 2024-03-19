#include <stdio.h>

int main()
{
    int num, i, a, b;
    a = b = 0;
    for (i = 0; i < 3; ++i)
    {
        scanf("%d", &num);
        if (num == 5)
            a++;
        else if (num == 7)
            b++;
    }
    if (a == 2 && b == 1)
        printf("YES\n");
    else
        printf("NO\n");
}