#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c == 17)
    {
        if (a == 5 && b == 5)
        {
            puts("YES");
            return (0);
        }
        if (b == 5 && c == 5)
        {
            puts("YES");
            return (0);
        }
        if (c == 5 && a == 5)
        {
            puts("YES");
            return (0);
        }
    }
    puts("NO");
    return 0;
}