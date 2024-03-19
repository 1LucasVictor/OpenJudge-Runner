#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int a, b;
    int ans;

    scanf("%d %d", &a, &b);

    if (b % a == 0) {
        ans = a + b;
    } else {
        ans = b - a;
    }

    printf("%d\n", ans);

    return 0;
}
