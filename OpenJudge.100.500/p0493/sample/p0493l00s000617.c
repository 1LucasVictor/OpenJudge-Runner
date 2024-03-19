#include <stdio.h>

int main(void)
{
    int X;
    int coin500, coin5;

    scanf("%d", &X);
    coin500 = X / 500;
    coin5 = (X % 500) / 5;

    printf("%d\n", coin500 * 1000 + coin5 * 5);
}
