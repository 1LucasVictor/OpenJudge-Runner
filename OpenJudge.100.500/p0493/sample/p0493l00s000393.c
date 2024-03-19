#include<stdio.h>

int main() {
    int X, a, b, r;
    scanf("%d", &X);

    a = X/500;
    X = X-(a*500);
    b = X/5;
    r = (a*1000) + (b*5);

    printf("%d\n", r);
    return 0;
}
