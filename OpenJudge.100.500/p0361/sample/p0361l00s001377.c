/*
 * ID: ITP1_1_D
 * Problem: watch (convert seconds to the form of "hh:mm:ss")
 */

#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    scanf("%d", &sec);
    min = sec / 60;
    sec %= 60;
    hour = min / 60;
    min %= 60;
    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}

