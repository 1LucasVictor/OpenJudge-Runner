/* ex3_4
    riverstone*/


#include <stdio.h>
 
int main(void){
    int number=0;
    int i=0;

    // number の入力を取得
    scanf("%d",&number);

    // iを総当たり
    // 割り切れるものがあればyes、なければNoを出力
    for(i=1;i<10;i++){
        //numberがiで割り切れてかつ商が9以下ならいい。
        if(number % i == 0 && number/i < 10){
          printf("Yes");
          return 0;
        } 
    }
    printf("No");
    return 0;
}