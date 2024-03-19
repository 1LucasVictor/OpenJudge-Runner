#include <stdio.h>

int main() {
    int k, a, b;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
    int m = a % k;
    printf(!m || b - a >= k - m ? "OK" : "NG");
    return 0;
}
