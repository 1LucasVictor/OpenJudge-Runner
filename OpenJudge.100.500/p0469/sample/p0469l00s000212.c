#include <stdio.h>
int main() {
    int a, b, k;
    scanf("%d\n%d %d", &k, &a, &b);
    if (a % k == 0 || b % k == 0) printf("OK\n");
    else {
        int r = a % k;
        if (a - r + k <= b) printf("OK\n");
        else printf("NG\n");
    }

    return 0;
}