#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 200010
#define MAX 1000000000000000000

#include <stdio.h>

int main (void) {
    char n[4];
    int i;

    scanf("%s", n);

    for (i = 0; i < 4; i++) {
        if (n[i] == '7') {
            puts("Yes");
            return 0;
        }
    }

    puts("No");

    return 0;
}

