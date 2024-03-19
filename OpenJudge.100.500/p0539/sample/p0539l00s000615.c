/* ex3_4
   urah  */

#include <stdio.h>

int main(void){
    int N, N_init;

    // 入力を受け取る
    scanf("%d", &N);

    // Nの初期値を保持しておく
    N_init = N;

    // ループを使って解く
    for (int i=1; i <= 9; i++) {
        // 一回でも1~9で割り切れた場合
        if (N % i == 0) { 
            N = N / i;
            for (int j = 1; j <= 9; j++){
                // 商は1~9のいずれかであるか
                if (N == j) {
                    printf("Yes\n");
                    return 0;
                }
            }
            // Nをiで割っているのでもとに戻す
            N = N_init;
        }
    }

    printf("No\n");
    return 0;
}
