/* ex3_2 melo */
#include <stdio.h>
int main(void){
    int N, n;
    scanf("%d",&N);
    n = N%10;
    switch(n){
        case 2:case 4:case 5:case 7:case 9://2または4または5または7または9であった場合
        printf("hon\n");
        break;
        case 0:case 1:case 6:case 8://0,1,6,8のいずれかであった場合
        printf("pon\n");
        break;
        case 3:printf("bon\n");//3であった場合
        break;
        default:fprintf(stderr, "unexpected N value:%d¥n", N);return 1;//他の場合

    }
    return 0;
    

}