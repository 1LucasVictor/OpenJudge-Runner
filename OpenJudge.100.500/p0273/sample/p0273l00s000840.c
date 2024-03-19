#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

static int DIC[50];

static int fibonacci_with_dic(int n) {
    if ( DIC[n] > 0 ) {
        return DIC[n];
    }

    DIC[n - 2] = fibonacci_with_dic(n - 2);
    DIC[n - 1] = fibonacci_with_dic(n - 1);

    return DIC[n - 1] + DIC[n - 2];
}

int main (int argc, char* argv[]) {
    int n, i;
    int f;

    for ( i = 0; i < sizeof(DIC)/sizeof(DIC[0]); i++ ) {
        DIC[i] = -1;
    }
    DIC[0] = DIC[1] = 1;

    scanf("%d\n", &n);

    f = fibonacci_with_dic(n);

    printf("%d\n", f);

    return 0;
}

