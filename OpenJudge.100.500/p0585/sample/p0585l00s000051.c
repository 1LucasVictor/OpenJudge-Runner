#include <stdio.h>

int main(void)
{
    int sec, bis, tim;

    scanf("%d %d %d", &sec, &bis, &tim);

    printf("%d", (tim / sec) * bis);

    return 0;
}