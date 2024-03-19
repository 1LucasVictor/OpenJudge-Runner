#include <stdio.h>
//#include <string.h>

int main() {
    int n, i, val, min, max;
    long sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &val);

        if (i == 0) {
            min = val;
            max = val;
        }

        sum += val;

        if (val < min)
            min = val;
        if (val > max)
            max = val;
    }

    printf("%d %d %ld\n", min, max, sum);

    return 0;
}
