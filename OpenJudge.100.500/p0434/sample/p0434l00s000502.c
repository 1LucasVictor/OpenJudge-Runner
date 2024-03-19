#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    int x;

    scanf("%d", &x);
    if(x >= 30) puts("Yes");
    else puts("No");

    return 0;
}