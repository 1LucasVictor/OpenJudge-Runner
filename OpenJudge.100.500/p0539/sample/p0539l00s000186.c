/*  ex3_4
    person_A  */
#include<stdio.h>
int main(void){
    int number,between19=1;
    //整数Nの入力
    scanf("%d",&number);
    //numberを1以上9以下を順に動くbetween19で割っていき、割り切れてかつ商が1以上9以下である時 Yes を出力
    while(between19<=9){
        if(number%between19==0&&1<=number/between19&&number/between19<=9){
            printf("Yes\n");
            return 0;
        }
        between19++;
    }
    //条件を満たせなかった場合 No を出力
    printf("No\n");
    return 0;
}