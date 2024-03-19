#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int d, n;
    scanf("%d%d", &d, &n);
    int ans;
    if (d==0) ans = n;
    else if (d==1) ans = 100*n;
    else ans = 10000*n;
    printf("%d\n", ans);
    return 0;
}
