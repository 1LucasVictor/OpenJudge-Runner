#include <stdio.h>

void tmp(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (b > c) tmp(&b, &c);
    if (a > b) tmp(&a, &b);
    if (b > c) tmp(&b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}