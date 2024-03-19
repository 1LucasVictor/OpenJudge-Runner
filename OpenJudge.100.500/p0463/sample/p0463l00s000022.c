#include <stdio.h>

int main()
{
    int n, n1;
    scanf("%d", &n);
    n1 = n % 10;
    if (n1 == 2 || n1 == 4 || n1 == 5 || n1 == 7 || n1 == 9)
    {
        printf("hon");
    }
    else if (n1 == 0 || n1 == 1 || n1 == 6 || n1 == 8)
    {
        printf("pon");
    }
    else if (n1 == 3)
    {
        printf("bon");
    }

    return 0;
}