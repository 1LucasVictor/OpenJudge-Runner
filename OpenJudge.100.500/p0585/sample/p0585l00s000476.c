#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <memory.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int a, b, t;
    int ans;

    scanf("%d %d %d", &a, &b, &t);

    ans = (t / a) * b;

    printf("%d\n", ans);

    return 0;
}
