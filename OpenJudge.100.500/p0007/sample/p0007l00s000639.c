#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int c;
int n;

void calc(int p, int sum) {

    if (p == 0) {
        if ( sum == n )
            ++c;
        return;
    }

    int i;
    for ( i = 0; i < 10; ++i ) {
        calc(p - 1, sum + i );
    }
}

int main () {

    while ( scanf("%d", &n) != EOF ) {
        c = 0;
        calc(4, 0);
        printf("%d\n", c);
    }

    return 0;
}