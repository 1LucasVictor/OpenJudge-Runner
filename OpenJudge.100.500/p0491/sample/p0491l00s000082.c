#include <stdio.h>

int main()
{
    unsigned long long int n, k;
    long long int tmp;
    int end;

    scanf("%llu%llu", &n, &k);

    if (k == 1)
        n = 0;
    else {
        do {
            end = 0;
            tmp = n - 10000 * k;
            if (tmp > 0) {
                n = tmp;
                end = 1;
            }
        } while (end == 1);
        
        do {
            end = 0;
            tmp = (long long int)(n - k);
            if (tmp < 0)
                tmp *= -1;
            if (tmp < n) {
                n = (unsigned long long)tmp;
                end = 1;
            }
        } while (end == 1);
    }

    printf("%llu\n", n);

    return 0;
}