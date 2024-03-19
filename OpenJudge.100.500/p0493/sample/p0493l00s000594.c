#include<stdio.h>

int main(){

    int X;
    int a,b; // 500円、50円の枚数

    scanf("%d", &X);

    a = X / 500;
    b = (X % 500) / 5;

    printf("%d\n", 1000*a + 5*b);

    return 0;
}
