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
    int n, a, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        if ((a % 2 == 0) &&
                ((a % 3 != 0) &&
                 (a % 5 != 0))) {
            puts("DENIED");
            return 0;
        }
    }

    puts("APPROVED");

    return 0;
}

