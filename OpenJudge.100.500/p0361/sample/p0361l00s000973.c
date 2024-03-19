#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d", &a);
    b = a % 3600;
    printf("%d:%d:%d\n", a/3600, b/60, b%60);
    return 0;
}
