#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (1)
    {
        if (n == 0)
        {
            printf("No");
            break;
        }
        if (n % 10 == 7)
        {
            printf("Yes");
            break;
        }
        n /= 10;
    }
    return 0;
}