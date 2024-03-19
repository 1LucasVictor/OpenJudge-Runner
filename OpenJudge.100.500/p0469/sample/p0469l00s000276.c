#include <stdio.h>
#include <math.h>

int main (void)
{
    int k,a,b;
    int ans;

    scanf("%d", &k);
    scanf("%d %d", &a, &b);

    ans = k * (b / k);

    if (ans >= a && ans <= b) {
        puts("OK");
    } else {
        puts("NG");
    }

    return 0;
}
