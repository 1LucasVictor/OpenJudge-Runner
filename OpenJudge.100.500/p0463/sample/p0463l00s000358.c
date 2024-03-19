/* ex_3-2. nknm */

#include <stdio.h>

int main(void){

    //鉛筆の本数を入力
    int pencils;

    scanf("%d", &pencils);

    //条件により異なる出力
    if (pencils % 10 == 3){
        printf("bon\n");
    }else if(pencils % 10 == 0 || pencils % 10 == 1 || pencils % 10 == 6 || pencils % 10 == 8){
        printf("pon\n");
    }else{
        printf("hon\n");
    }
    return 0;
}