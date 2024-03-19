/* ex2_1_3
Acro */

#include <stdio.h> 
int main(void){
    int n,n_1;
    scanf("%d",&n);
    /* 1の位を抽出 */
    n_1 = n % 10;
    /* 条件分岐、改行忘れずに */
    if(n_1 == 3)
    {
        printf("bon\n");
    }
    else if (n_1 == 0 || n_1 == 1 || n_1 == 6 || n_1 == 8)
    {
        printf("pon\n");
    }
    else
    {
        printf("hon\n");
    }
    
    return 0;
}