#include <stdio.h>

int main(void)
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a >= 9 || b >= 9)
    {
        printf(":(\n");
    }
    else
    {
        printf("Yay!\n");
    }
    return 0;
}
