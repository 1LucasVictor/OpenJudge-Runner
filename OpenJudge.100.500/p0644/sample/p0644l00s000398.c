#include <stdio.h>

int main(void) {
    int s;
    scanf("%d", &s);

    int count = 0;
    if (s % 10 != 0) { count++; };
    if ((s / 10) % 10 != 0) { count++; };
    if ((s / 100) != 0) { count++; };

    printf("%d\n", count);

    return 0;
}
