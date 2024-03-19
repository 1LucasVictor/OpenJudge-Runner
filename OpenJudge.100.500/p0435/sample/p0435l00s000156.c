#include <stdio.h>

int main()
{
    int n, d, x, y, count = 0;
    scanf("%d %d", &n, &d);
    long long d_sqr = d * d;
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        unsigned long long x_sqr = x * x;
        unsigned long long y_sqr = y * y;
        //printf("x * x = %llu\t y * y = %llu\t d * d = %lld\t", x_sqr, y_sqr, d_sqr);
        if (x_sqr <= (d_sqr - y_sqr)) {
            //printf("Yes\n");
            count++;
        }
        else {
            //printf("No\n");
        }
    }
    printf("%d", count);
}