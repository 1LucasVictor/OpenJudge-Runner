/* ex3_2
   kohei0713 */

#include <stdio.h>

int main(void){
    
    int penNumber;
    
    //input
    scanf("%d", &penNumber);

    //penNumberの1の位を計算
    int onesPlace = penNumber % 10;

    if(onesPlace == 3){
        printf("bon\n");
    }
    else if(onesPlace == 0 || onesPlace == 1 || onesPlace == 6 || onesPlace == 8){
        printf("pon\n");
    }
    else{
        printf("hon\n");
    }

    return 0;
}