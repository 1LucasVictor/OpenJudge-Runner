#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 200010
#define MAX 1000000000000000000
#define MOD 1000000007

#include <stdio.h>

int main (void) {
    int h, a;

    scanf("%d %d", &h, &a);

    printf("%d", (h + a - 1) / a);

    return 0;
}

