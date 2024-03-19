#include <stdio.h>

int main() {
    int k, a, b;
    scanf("%d", &k);
    double k_ = (double) k;
    scanf("%d %d", &a, &b);
    printf(k == 1 || b / k_ - a / k_ >= 1 ? "OK" : "NG");
    return 0;
}