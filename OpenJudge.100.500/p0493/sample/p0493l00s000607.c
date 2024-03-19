#include<stdio.h>

int main(){

    char s[6];
    int i, a, b, x;

    scanf("%d", &x);

    a = x / 500;
    b = x % 500 / 5;

    printf("%d\n", 1000*a + b*5);

    return 0;
}