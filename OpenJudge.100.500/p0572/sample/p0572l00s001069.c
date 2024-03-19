#include <stdio.h>

#define MOD 2019

int main(void) {
  	int L, R, l, r, A, a;
    int c = 2018;
  	scanf("%d %d", &L, &R);
    if((R - L) >= 2019) {
        printf("0\n");
        return 0;
    }
    for (int i = L; i < R; i++) {
        for(int j = i + 1; j <= R; j++) {
            l = i % MOD;
            r = j % MOD;
            A = l * r;
            a = A % MOD;
            if (a < c) {
                c = a;
            }
        }
    }
    printf("%d", c);
    return 0;
}