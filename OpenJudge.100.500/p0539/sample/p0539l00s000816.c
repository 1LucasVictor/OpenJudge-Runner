/* ex3_4
    riverstone*/

#include <stdio.h>
 
int main(void){
    //Nをnumberとする。
    int number;
    int factor=0;

    // number の入力を取得
    scanf("%d",&number);

    // iを総当たり
    // 割り切れるものがあればyes、なければNoを出力
    for(factor=1;factor<10;factor++){
        //numberがiで割り切れてかつ商が9以下ならいい。
        if(number % factor == 0 && number/factor < 10){
            printf("Yes");
            return 0;
        } 
    }
    printf("No");
    return 0;
}