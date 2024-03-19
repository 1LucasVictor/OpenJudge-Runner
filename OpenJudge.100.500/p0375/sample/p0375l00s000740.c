#include<stdio.h>
int main(){
    unsigned short usW_D_cal;
    unsigned short usW_D_imput;
    unsigned short usW_C_i;
    scanf("%d", &usW_D_imput);
    for(usW_C_i = 1;usW_C_i <= usW_D_imput;usW_C_i++){
        if(usW_C_i % 3 == 0){
            printf(" %d", usW_C_i);
            continue;
        }
        usW_D_cal = usW_C_i;
        do{
            if(usW_D_cal % 10 == 3){
                printf(" %d", usW_C_i);
                break;
            }
        usW_D_cal /= 10;
        }while(usW_D_cal);
    }
    printf("\n");
    return 0;
}
