#include <stdio.h>

int main(void){
    int H, W, i, j;
    //scan H and W until 0 0
    while(1){
        scanf("%d %d", &H, &W);
        if (H == 0 && W == 0 )
        break;

    for ( i = 1; i <= H; i++ ){
        for ( j = 1; j <= W; j++ ){
            if(i > 1 && i <= H - 1 && j > 1 && j <= W - 1){
                printf(".");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
        printf("\n");
    }
}

    
