#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int min(int a, int b) {
    if(a <= b) {
        return a;
    }
    else {
        return b;
    }
}

int main(void){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int s1, s2, e1, e2;

    if(A < C) {
        s1 = 0;
        s2 = C - A;
        e1 = B - A;
        e2 = D - A;
    }
    else {
        s1 = 0;
        s2 = A - C;
        e1 = D - C;
        e2 = B - C;
    }

    if(e1 <= s2) {
        printf("0\n");
        return 0;
    }
    printf("%d\n", min(e1, e2) - s2);
    return 0;
}