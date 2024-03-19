#include <stdio.h>
int main(void){
    int i,j,m,H,W;
    m = 1;
    while(1){
        scanf("%d %d",&H,&W);
        if(H == 0 && W == 0)break;
        for(j = 0;j < H; j++){
            for(i = 0;i < W; i++){
                if(j == 0 || j == H-1 ||i == 0 || i == W-1){
            printf("#");
                }else{
                    printf(".");
                }
            }
            printf("\n");
        } 
        printf("\n");
    
    m++;
    }
    
    
  return 0;

 }
