/* ex 3-2
    kas056 */
#include <stdio.h>
int main(void){
    int N , R;
 
    // Nの読み込み
    scanf("%d", &N);
    //余り(remain)で考える
    R = N % 10;//以下条件によって場合分け（「または」を使うとき）
    //remainが2,4,5,7,9の場合
    if (R==2 || R==4 || R==5 || R==7 || R==9){
        printf("hon\n");
    }
    //remainが0,1,6,8の場合
    else if (R==0 || R==1 || R==6 || R==8){
        printf("pon\n");
    }
    //remainが3の場合
    else{
        printf("bon\n");
    }
    return 0;
}