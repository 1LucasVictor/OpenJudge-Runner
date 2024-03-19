// 課題3_2 AtCoder Beginner Contest 168 A- (Therefore)
// nk777
 
#include <stdio.h>
 
int main(void){
    // 入力される整数Nを表すnum, Nの小数第1位を表すnum_1
    int num, num_1;
 
    // numを受け取る
    scanf("%d", &num);
 
    // numの少数第1位を計算
    num_1 = num % 10;
 
    if (num_1 == 3)
    {
        // Nの少数第1位が3
        printf("bon\n");
    }
    else if (num_1 == 0 || num_1 == 1 || num_1 == 6 || num_1 == 8)
    {
        // numの少数第1位が0,1,6,8
        printf("pon\n");
    }
    else
    {
        // numの少数第1位が2,4,5,7,9
        printf("hon\n");
    }
 
    return 0;
}