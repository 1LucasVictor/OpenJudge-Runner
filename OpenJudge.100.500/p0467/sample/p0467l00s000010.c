#include <stdio.h>
#include <math.h>
int main() {
    long long a, b, c, k;
    scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
    if (k-a <= 0) printf("%d",k);
    else if (k-a-b <= 0) printf("%d",a);
    else printf("%d",a-(k-a-b));
}
