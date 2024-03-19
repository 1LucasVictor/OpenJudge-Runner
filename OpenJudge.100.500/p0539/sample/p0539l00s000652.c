/* ex3_4
    sak_Citrus*/

#include <stdio.h>

int main(void){
    //標準入力
    int num;
    scanf("%d",&num);
    for(int i=1;i<10;i++){
        //nがiで割り切れてなおかつその商が10未満なら
        if(num%i == 0 && num/i < 10){
            printf("Yes\n");
            break;
        }
        //最後までbreakされなかったら九九にはない
        if(i == 9)
            printf("No\n");
    }

    return 0;

}