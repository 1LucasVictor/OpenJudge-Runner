/* ex3_2
        fmuacshai */

#include<stdio.h>
int main(void){
    //整数nとnの1の位ones_placeを定義
    int n,ones_place;
    //nを入力
    scanf("%d",&n);
    //nの1の位を計算
    ones_place=n%10;
    //nの1の位によって場合分け
    if(ones_place==3){
        //bonの場合
        printf("bon\n");
    }else if(ones_place==0 || ones_place==1 || ones_place==6 || ones_place==8){
        //ponの場合
        printf("pon\n");
    }else{
        //honの場合
        printf("hon\n");
    }
    return 0;
}