/* ex 3-2
    kas056 */
#include <stdio.h>
int main(void){
    int N , remain;
 
    // Nの読み込み
    scanf("%d", &N);
    //余り(remain)で考える
    remain = N % 10;//以下条件によって場合分け（「または」を使うとき）
    //remainが2,4,5,7,9の場合
    if (remain==2 || remain==4 || remain==5 || remain==7 || remain==9){
        printf("hon\n");
    }
    //remainが0,1,6,8の場合
    else if (remain==0 || remain==1 || remain==6 || remain==8){
        printf("pon\n");
    }
    //remainが3の場合
    else{
        printf("bon\n");
    }
    return 0;
}