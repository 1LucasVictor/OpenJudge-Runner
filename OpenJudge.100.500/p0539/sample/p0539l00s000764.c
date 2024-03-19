/*ex3_4
  terakura */
 
#include <stdio.h>
 
int main(void){
    int number, a = 9;
    scanf("%d", &number);
 
//2〜9で割り切れてかつ商が一桁のものを探す
    while(a > 1){
        if(number%a == 0 && number/a < 10){
            printf("Yes\n");
            break;      //見つかったら”yes”で終了
 
        }else{
            a--;
        }
 
//上で見つからなかったら終了
    if(a == 1){
        printf("No\n");
    }
 
}
 
return 0;
}