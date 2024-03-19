#include<stdio.h>
int main(void){
    int H,W,x,y;
    while(1){
        scanf("%d %d",&H,&W);
        if(H == 0 && W ==0)
            break;
        for(y=0; y<H;y++){
            for(x=0; x<W; x++){
                if(x ==0 || y == 0 || x == W-1 ||y == H-1){
                    printf("#");
                }else{
                    printf(".");
                }
                
            }
            printf("\n");
        }
    }
    return 0;
}