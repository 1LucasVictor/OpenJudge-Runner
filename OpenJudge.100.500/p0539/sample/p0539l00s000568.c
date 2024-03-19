// 課題3_4 AtCoder Beginner Contest 144 B - 81
// nk777
 
#include <stdio.h>
 
int main(void){
    // 整数Nを格納num,カウンタi_count, 結果格納result
    int num, i_count, result = 0;
 
    // nを受け取る
    scanf("%d", &num);
 
    for (i_count = 1; i_count < 10; i_count++)
    {
        // iの段を調べる
        // num/iの商が整数で1以上9以下
        if (num % i_count == 0 && 0 < num / i_count && num / i_count < 10)
        {
            result = 1;
            break;
        }
    }
    if (result == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}