#include <stdio.h>

int main()
{
    int n, d, x, y, count = 0;
    scanf("%d %d", &n, &d);
    unsigned long long d_sqr = (unsigned long)d * (unsigned long)d;
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        unsigned long long x_sqr = (unsigned long)x * (unsigned long)x;
        unsigned long long y_sqr = (unsigned long)y * (unsigned long)y;
        if (x_sqr + y_sqr <= d_sqr) {
            count++;
        }
    }
    printf("%d", count);
}