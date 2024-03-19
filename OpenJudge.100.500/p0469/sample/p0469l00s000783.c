#include <stdio.h>
#include <string.h>

int main()
{
    int k, a, b, t;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);

    if (b / k != a / k || (b == a && b % k == 0))
        printf("OK");
    else
    {
        printf("NG");
    }

    return 0;
}