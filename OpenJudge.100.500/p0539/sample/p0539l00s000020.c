/* ex3-3
   Sagzar1993  */


#include <stdio.h>

int main(void) {
    //表す整数と基数を定義
    int num;

    //入力を受け取る
    scanf("%d", &num);

    //numが各数字で割り切れ、かつその商が１から９の間であるとき、Yesを表示
    if(num % 2 == 0 && num / 2 <= 9){
        printf("Yes\n");
    }else if(num % 3 == 0 && num / 3 <= 9){
        printf("Yes\n");
    }else if(num % 4 == 0 && num / 4 <= 9){
        printf("Yes\n");
    }else if(num % 5 == 0 && num / 5 <= 9){
        printf("Yes\n");
    }else if(num % 6 == 0 && num / 6 <= 9){
        printf("Yes\n");
    }else if(num % 7 == 0 && num / 7 <= 9){
        printf("Yes\n");
    }else if(num % 8 == 0 && num / 8 <= 9){
        printf("Yes\n");
    }else if(num % 9 == 0 && num / 9 <= 9){
        printf("Yes\n");
    }else{
        printf("No\n"); //どれにも当てはまらなかった場合はNoを表示
    }
    return 0;
}