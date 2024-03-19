#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", b - a + a * 2 * !(b % a));
    return 0;
}