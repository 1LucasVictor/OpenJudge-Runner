/*  ex3_2
    person_A  */
#include<stdio.h>
int main(void){
    int naturalNumber,firstDigit;
    //Nの入力
    scanf("%d",&naturalNumber);
    //naturalNumberの一の位firstDigitの値の取得
    firstDigit=naturalNumber%10;
    //一の位の数firstDigitに応じて場合わけ
    //１の位の数が2,4,5,7,9の時 hon を出力
    if(firstDigit==2||firstDigit==4||firstDigit==5||firstDigit==7||firstDigit==9){
        printf("hon\n");
    }
    //一の位が0,1,6,8の時 pon を出力
    else if(firstDigit==0||firstDigit==1||firstDigit==6||firstDigit==8){
        printf("pon\n");
    }
    //一の位が3の時 bon を出力
    else if(firstDigit==3){
        printf("bon\n");
    }
    return 0;
}