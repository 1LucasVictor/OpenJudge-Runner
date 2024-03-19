#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, k;
    scanf("%d%d%d%d",&a,&b,&c,&k);
    if (k-a <= 0) printf("%d",k);
    else if (k-a-b <= 0) printf("%d",a);
    else printf("%d",a-(k-a-b));
}
