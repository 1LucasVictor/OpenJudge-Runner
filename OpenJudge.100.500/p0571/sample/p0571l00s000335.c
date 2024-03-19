#include<stdio.h>

int main(void){
    int a, b, n;
    scanf("%d %d %d", &n, &a, &b);
    int s=b;

    if(s>n*a){
        s=n*a;
    }
    printf("%d", s);
    return 0;
}