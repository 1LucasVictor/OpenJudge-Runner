#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 200010
#define MAX 1000000000000000000

#include <stdio.h>

int main (void) {
    int tsuru, kame, x, y;

    scanf("%d %d", &x, &y);

    kame = (y - (2 * x)) / 2;
    tsuru = x - kame;

    if (tsuru >= 0 && kame >= 0 && ((2 * tsuru) + (4 * kame) == y) && tsuru + kame == x) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}

