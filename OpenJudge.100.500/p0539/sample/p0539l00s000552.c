/* ex3_4 "81"
   dada__    */
#include<stdio.h>
int main(void){
    int integerN, i;
    scanf("%d", &integerN);//整数Nの入力

    for(i=1;i<10;i++){
        if( (integerN/i)<10 && integerN%i==0 ){ //整数Nが九九に含まれるかの判定
            printf("Yes\n"); 
            break; //Yes出力後ループ終了
        }
    }

    if(i==10){
        printf("No\n"); //九九の表に含まれない場合の出力
    }
    return 0;
}