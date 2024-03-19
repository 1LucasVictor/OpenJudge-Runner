/* ex3_2
   seira3 */

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N; //変数宣言
    scanf("%d",&N); //Nに入力
    int unit_digit; //Nの一の位
    unit_digit = N % 10; //代入
    if(unit_digit==3){ //Nの一の位が3のとき
        printf("%s\n","bon"); //bonを出力
    }
    else if(unit_digit==0||unit_digit==1||unit_digit==6||unit_digit==8){ //Nの一の位が0,1,6,8のとき
        printf("%s\n","pon"); //ponを出力
    }
    else{ //それ以外の時
        printf("%s\n","hon"); //honを出力
    }
    return 0;
}