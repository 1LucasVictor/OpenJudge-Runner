#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int n, *r, i = 0, max = INT_MIN, i_max, min = INT_MAX;
    scanf("%d", &n);
    r = malloc(sizeof(int) * n);
    while (i < n) {
        scanf("%d", &r[i]);
        i++;
    }
    for (i = 1; i < n; i++) {
        if (r[i] > max) {
            max = r[i];
            i_max = i;
        }
    }
    for (i = 0; i < i_max; i++) {
        if (r[i] < min)
            min = r[i];
    }
    printf("%d\n", max - min);
}