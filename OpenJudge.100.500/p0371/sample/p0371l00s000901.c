#include <stdio.h>

int main()
{
    int n, a;
    int i;
    int min;
    int max;
    long long sum;

    scanf("%d", &n);

    min = 0;
    max = 0;
    sum = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        if(i == 0) {
            min = a;
            max = a;
        } else if(a < min) {
            min = a;
        } else if(a > max) {
            max = a;
        }
        sum += a;
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}
