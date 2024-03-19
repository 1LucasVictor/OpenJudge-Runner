#include <stdio.h>
#include <math.h>
int main() {
    int d, n;
    scanf("%d%d", &d, &n);
    n = n == 100 ? n + 1 : n;
    for (int i = 0; i < d; i++) {
        n *= 100;
    }
    printf("%d\n", n);
    return 0;
}