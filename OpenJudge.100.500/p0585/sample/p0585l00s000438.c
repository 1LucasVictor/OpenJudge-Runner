#include <stdio.h>

int main(){
    int a, b, t, x, y;

    scanf("%d %d %d", &a, &b, &t);
    //printf("%d %d %d \n", a, b, t);

    x = t / a;
    y = x * b;

    printf("%d \n", y);
}