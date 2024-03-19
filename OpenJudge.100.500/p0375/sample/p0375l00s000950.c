#include <stdio.h>

void call (int n);

int main (void) {
    int n;

    scanf ("%d", &n);
    call(n);

    return 0;
}

void call (int n) {
    for (int i=1; i<=n; i++) {
        int x = i;

        if (x%3==0) printf(" %d", i);
        else {
            for (;;) {
                if (x%10==3) {
                    printf (" %d", i);
                    break;
                }
                x /= 10; 
                if (x==0) break;
            }
        }
    }
    printf("\n");
}
