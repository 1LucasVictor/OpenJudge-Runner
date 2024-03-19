#include<stdio.h>

int main(void){
    int a,b, add, sub, mul;
    scanf("%d %d",&a, &b);
    add = a + b;
    sub = a - b;
    mul = a * b;

    int max = add;
    if(sub > max){
        max = sub;
    }
    if(mul > max){
        max = mul;
    }
    printf("%d",max);
    return 0;
}