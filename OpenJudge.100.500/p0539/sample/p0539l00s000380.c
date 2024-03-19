/* ex3_4
   kohei_suzuki */

#include <stdio.h>

int main(void){
    int n, m=9 ; //割られる整数nと割る整数m

    scanf("%d",&n); //nを入力

    int l = n / m; //nをmで割った整数l

    while(n % m != 0){ //9から順に1ずつ割っていき、割り切れるまで繰り返す
        m -= 1;
        l = n / m;
    }

    if(l < 10){ //割り切れてかつlが10より小さければyes
        printf("Yes\n");
    }else{ //それ以外ならno
        printf("No\n");
    }

    return 0;
}