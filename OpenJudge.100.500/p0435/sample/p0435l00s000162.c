#include <stdio.h>
#include <math.h>

int main(void)
{
    long n, d;
    

    scanf("%ld%ld", &n, &d);

    long x[n];
    long y[n];
    double s[n];
    long i;
    long count = 0;

    for (i = 1; i <= n; i++) {
        scanf("%ld%ld", &x[i-1], &y[i-1]);
        s[i-1] = sqrt(pow(x[i-1], 2)+pow(y[i-1], 2));
        if ((double)d >= s[i-1]) {
            count++;
        }
    }
    printf("%ld\n", count);

    return 0;
}