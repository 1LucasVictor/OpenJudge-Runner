/* ex3_4
   urah  */

#include <stdio.h>

int main(void){
    int num, num_init;

    // 入力を受け取る
    scanf("%d", &num);

    // numの初期値を保持しておく
    num_init = num;

    // ループを使って解く
    for (int i=1; i <= 9; i++) {
        // 一回でも1~9で割り切れた場合
        if (num % i == 0) { 
            num = num / i;
            for (int j = 1; j <= 9; j++){
                // 商は1~9のいずれかであるか
                if (num == j) {
                    printf("Yes\n");
                    return 0;
                }
            }
            // numをiで割っているのでもとに戻す
            num = num_init;
        }
    }

    printf("No\n");
    return 0;
}
