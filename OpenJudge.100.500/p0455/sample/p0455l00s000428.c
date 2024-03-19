#include<stdio.h>
int main(void){
    int a, calc;

    scanf("%d", &a);

    calc = a+ (a*a)+(a*a*a);

    printf("%d\n",calc);
}