/*  ex3_4
    pptenshi  */

#include<stdio.h>

int main(void) {
    int num;  // N

    //input
    scanf("%d", &num);

    //output
    for (int i = 1; i < 10; i++) {

        // nがiの段かどうかを判定
        if (num % i == 0 && num / i < 10) {
            printf("Yes\n");
            return 0;
        }
    }
    // 条件を満たさない場合
    printf("No\n");
    
    return 0;
}