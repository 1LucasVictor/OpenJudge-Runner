/* ex3_2
    riverstone*/

#include<stdio.h>
 
int main(void){
    //Nをint型で定義して入力する。
    int N;
    scanf("%d", &N);
 
    // Nを10で割った余りでswitchで場合分け
    switch (N % 10){
    case 2: case 4: case 5: case 7: case 9:
        printf("hon\n");
        break;
    
    case 0: case 1: case 6: case 8:
        printf("pon\n");
        break;
 
    case 3:
        printf("bon\n");
        break;
    }
    return 0;
}