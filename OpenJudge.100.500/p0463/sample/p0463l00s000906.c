/* ex3_2 "∴(Therefore)"
   dada__               */
#include<stdio.h>
int main(void){
    int pencil;
    scanf("%d", &pencil); //本数Nの入力

    switch(pencil%10){ //一の位による場合分け
        case 2:case 4:case 5:case 7:case 9:
        printf("hon\n"); break;
        case 0:case 1:case 6:case 8:
        printf("pon\n"); break;
        case 3:
        printf("bon\n"); break;
    }

    return 0;
}