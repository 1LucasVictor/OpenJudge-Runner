/*3.2 hightierra*/
#include <stdio.h>
 
int main(void){
    //変数の定義
    int N,amari;
    scanf("%d",&N);
    //amariにNの１の位を代入
    amari = N % 10;
 
    //amariの値で場合わけ
    switch(amari){
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
          printf("hon");
          break;
        case 0:
        case 1:
        case 6:
        case 8:
          printf("pon");
          break;
        case 3:
          printf("bon");
          break;
    }
    return 0;
}