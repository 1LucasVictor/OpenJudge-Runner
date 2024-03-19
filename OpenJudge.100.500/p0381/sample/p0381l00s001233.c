#include<stdio.h>

int main () {
    int c = 0, i, j, k, l, n [98], x [301];
    for (i = 0; n [i - 1] != 0 || x [i - 1] != 0; i++) {
         scanf("%d %d", &n [i], &x [i]);
    }
    for (i = 0; n [i] != 0 || x [i] != 0; i++) {
        for (j = 1; j < n [i] - 1; j++) {
            for (k = j + 1; k < n [i]; k++) {
                for (l = k + 1; l < n [i] + 1; l++) {
                    if (j + k + l == x [i]) {
                        c++;
                    }
                }
            }
        }
    printf("%d", c);
    c = 0;
    }

    return 0;
}


