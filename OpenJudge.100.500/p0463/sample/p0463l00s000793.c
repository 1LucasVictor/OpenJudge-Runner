// 課題3_2 AtCoder Beginner Contest 168 A- (Therefore)
// nk777
 
#include <stdio.h>
 
int main(void){
    // 入力される整数N, Nの小数第1位を表すN_1
    int N, N_1;
 
    // Nを受け取る
    scanf("%d", &N);

    // Nの少数第1位を計算
    N_1 = N % 10;

    if (N_1 == 3)
    {
        // Nの少数第1位が3
        printf("bon\n");
    }
    else if (N_1 == 0 || N_1 == 1 || N_1 == 6 || N_1 == 8)
    {
        // Nの少数第1位が0,1,6,8
        printf("pon\n");
    }
    else
    {
        // Nの少数第1位が2,4,5,7,9
        printf("hon\n");
    }

    return 0;
}