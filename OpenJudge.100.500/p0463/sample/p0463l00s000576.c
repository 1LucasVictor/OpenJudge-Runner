/* ex3_2
Acro */

#include <stdio.h> 
int main(void){
    int num,num_1;
    scanf("%d",&num);
    /* 1の位を抽出 */
    num_1 = num % 10;
    /* 条件分岐、改行忘れずに */
    if(num_1 == 3)
    {
        printf("bon\n");
    }
    else if (num_1 == 0 || num_1 == 1 || num_1 == 6 || num_1 == 8)
    {
        printf("pon\n");
    }
    else
    {
        printf("hon\n");
    }
    
    return 0;
}