/* ex3_2
   urah  */

#include <stdio.h>

int main(void){
    int N_ones_place;

    // 入力受け取り
    scanf("%d", &N_ones_place);

    // 条件分岐
    if (N_ones_place%10 == 3) {
        printf("bon");
    } else if (N_ones_place%10 == 0 || N_ones_place%10 == 1 || N_ones_place%10 == 6 || N_ones_place%10 == 8){
        printf("pon");
    } else {
        printf("hon");
    }

    return 0;
}
