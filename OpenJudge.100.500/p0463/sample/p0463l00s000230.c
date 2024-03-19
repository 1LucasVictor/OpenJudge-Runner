/* ex3_2
    sak_Citrus*/

#include <stdio.h>
 
int main(void){
    int n;
    scanf("%d",&n);
    //1桁目だけが欲しいので
    n = n % 10;
    switch(n){
        //3だったらbon
        case 3:
            printf("bon");
            break;
        //0,1,6,8だったらpon
        case 0:
        case 1:
        case 6:
        case 8:
            printf("pon");
            break;
        //2,4,5,7,9はhon
        default:
            printf("hon");
            break;
    }
    //改行
    printf("\n");
    return 0;
}