/* ex3_4
   kohei_suzuki */

#include <stdio.h>

int main(void){
    int pro, div=9 ; //割られる整数proと割る整数div

    scanf("%d",&pro); //proを入力

    int quot; //proをdivで割った整数quot

    while(pro % div != 0){ //9から順に1ずつ割っていき、割り切れるまで繰り返す
        div -= 1;
        quot = pro / div;
    }

    if(quot < 10){ //割り切れてかつlが10より小さければyes
        printf("Yes\n");
    }else{ //それ以外ならno
        printf("No\n");
    }

    return 0;
}