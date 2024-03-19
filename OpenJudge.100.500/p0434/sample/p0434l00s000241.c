#include <stdio.h>

int main(void)
{
    int late;
    scanf("%d", &late);
    if (late > 40 || late < -40)
    {
        return 0;
    }
    else if (late < 30)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}