#include <stdio.h>
#define N 101
#define X 298

void init(int [N][X]);

int main(void) {
    int n, x, tbl[N][X] = {{}};
    init(tbl);
    while(scanf("%d %d", &n, &x), n || x) {
        printf("%d\n", 0 < x && x < X ? tbl[n][x] : 0);
    }
    return 0;
}

void init(int tbl[N][X]) {
    int i, j, k;
    double v;
    for(i = 3; i < N; i++) {
        v = 1;
        for(j = i + 3; j <= ~-i * 3; j++) {
            for(k = i; k < N; k++) {
                tbl[k][j] += (int)v;
            }
            if(j < i * 2) {
                v += 0.5;
            } else {
                v -= 0.5;
            }
        }
    }
}