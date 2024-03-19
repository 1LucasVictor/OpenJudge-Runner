#include<stdio.h>
int main(void){
    int a, b,c,result;
    scanf("%d%d%d", &a, &b,&c);
    result = c / a * b;
    printf("%d", result);
    return 0;
}