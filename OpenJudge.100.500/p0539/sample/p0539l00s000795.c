/*  ex3_4
    L40S38  */

#include<stdio.h>
int main(void){
    int n, quotient, remainder;
    scanf("%d", &n);
    for(int i=1;i<10;i++){
        remainder = n%i;
        quotient = n/i;
        if(remainder==0 && quotient<=9 && quotient>=1){
            //remainder=0つまりiで割り切れてかつ商が1以上9以下の場合
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}