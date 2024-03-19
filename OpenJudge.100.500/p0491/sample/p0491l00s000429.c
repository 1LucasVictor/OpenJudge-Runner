#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, k;
    scanf("%lld%lld", &n, &k);
    long long min = n;
    int x = n%k;
    if(x > abs(x-k))
        x = abs(x-k);
    printf("%d\n", x);
    return 0;
}
