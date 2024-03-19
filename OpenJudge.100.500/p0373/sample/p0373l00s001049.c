#include <stdio.h>
int main(void){
    int H , W ;
    while(1){
        scanf("%d %d" , &H , &W);
        if(H == 0 && W == 0){break;}
        for(int i = 1 ; i <= 1 ; i++){
            for(int j = 1 ; j <= W ; j++){
                printf("#");
            }
            printf("\n");
        }
        for(int x = 2 ; x <= H-1 ; x++){
            printf("#");
            for(int y = 1 ; y <= W - 2 ; y++){
                printf(".");
            }
            printf("#\n");
        }
        for(int a = 1 ; a <= 1 ; a++){
            for(int b = 1 ; b <= W ; b++){
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
