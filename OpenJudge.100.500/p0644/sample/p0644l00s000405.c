#include <stdio.h>

int main(void)
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    printf("%d", a + b + c - ('0' * 3));

    return 0;
}