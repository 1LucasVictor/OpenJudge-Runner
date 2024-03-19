/*
    非負整数 n について、n>1 のときに n/10 を行う回数が求めるそれ
*/

#include <stdio.h>

int main() {
    int a, b, k, i;
    double c;

    for(i=0; i<3; i++) {
        scanf("%d%d", &a, &b);
        k=0;
        c = a+b;

        while(c >= 1.0) {
            c = c/10.0;
            k++;
        }

        printf("%d\n", k);
    }

    return 0;
}