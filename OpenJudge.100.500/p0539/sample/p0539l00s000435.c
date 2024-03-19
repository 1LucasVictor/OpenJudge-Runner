/* ex3-4
   Sagzar1993  */


#include <stdio.h>

int main(void) {
    int num;

    //入力を受け取る
    scanf("%d", &num);

    int i = 1;

    //numが各数字で割り切れ、かつその商が１から９の間であるとき、Yesを表示
    for(i; i < 10; i++){
        if(num % i == 0 && num / i <= 9){
            printf("Yes\n");
            break;
        }
    }

    if(i == 10){
        printf("No\n");
         //どれにも当てはまらなかった場合はNoを表示
    }
    
    return 0;
}
