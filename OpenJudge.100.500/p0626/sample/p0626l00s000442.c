#include <stdio.h>

int main(){
    int d, n;
    scanf("%d%d", &d, &n);
    long long base = 1;
    for(int i = 0; i < d; i++)
        base *= 100;
    printf("%lld\n", n >= 100 ? (n + 1) * base: n * base);
    return 0;
}
