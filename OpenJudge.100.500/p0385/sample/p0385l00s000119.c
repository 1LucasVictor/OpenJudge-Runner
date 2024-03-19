#include <stdio.h>

int main (void) {
    char x[1000];
    int res;

    for (;;) {
        res = 0;
        scanf ("%s", x);
        if (x[0]=='0') break;
        for (int i=0; x[i]!='\0'; i++) {
            res += x[i] - '0';
        }
        printf ("%d\n", res);
    }

    return 0;
}
