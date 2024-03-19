#include <stdio.h>

int main() {
    int y, x;
    scanf("%d %d", &y, &x);
    int v[y][x], b[x], c[y];
    for (int i = 0; i < y; i++) {
        c[i] = 0;
    }

    //------------------------------------------
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &v[i][j]);
        }
    }
    for (int i = 0; i < x; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            c[i] = c[i] + v[i][j] * b[j];
        }
    }
    for (int i = 0; i < y; i++) {
        printf("%d\n", c[i]);
    }
}

