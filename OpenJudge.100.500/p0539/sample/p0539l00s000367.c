/* ex3_4
        fmuacshai */
 
#include<stdio.h>
 
int main(void){
    //整数number、割る数div_number、商quotient
    int number,div_number,quotient;
    //numberの入力
    scanf("%d",&number);
    //div_numberの初期設定
    div_number=9;
    //余りが出なくなるまで計算
    while(number%div_number>0){
        div_number=div_number-1;
    }
    //quotientの計算
    quotient=number/div_number;
    //quotientが10未満ならYes、10以上ならNoと出力
    if(quotient<10){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}