#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = (a > c)? a: c;
    int min = (b > d)? d: b;
    int ret = min - max;
    if (ret < 0)
        ret = 0;
    printf("%d\n", ret);
    return 0;
}
