#include <stdio.h>
static int a, b, c, d, arr[101], i, sum;
int main(void) {
    scanf("%d%d%d%d", &a, &b, &c, &d);
    for (i = a; i < b; ++i) ++arr[i];
    for (i = c; i < d; ++i) ++arr[i];
    for (i = 0; i <= 100; ++i)
        if (arr[i] == 2) ++sum;
    printf("%d\n", sum);
    return 0;
}
