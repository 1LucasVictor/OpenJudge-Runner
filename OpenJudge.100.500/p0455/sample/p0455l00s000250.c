#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    printf("%d", a + (a * a) + (a * a * a));

    return 0;
}