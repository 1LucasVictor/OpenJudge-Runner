#include <stdio.h>

#define MOD 2019

int main(void) {
  	int L, R, A;
    int c = 2018;
  	scanf("%d %d", &L, &R);
    if((R - L) >= 2019) {
        printf("0\n");
        return 0;
    }
    for (int i = L; i < R; i++) {
        for(int j = i + 1; j <= R; j++) {
            A = (i % MOD) * (j % MOD) % MOD;
            if (A < c) {
                c = A;
            }
        }
    }
    printf("%d", c);
    return 0;
}