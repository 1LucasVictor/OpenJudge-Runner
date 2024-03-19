#include<stdio.h>

int main(void) {
    int a, b, c, d, e;
    scanf("%d", &a);
    b = a / 100;
    c = a - b * 100;
    d = c / 10;
    e = c - d * 10;
    if (b == 7 || d == 7 || e == 7) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}