#include<stdio.h>
int main(void){
    int H,W,i,j;
    while(1){
        scanf("%d %d",&H,&W);
        if(H==0&&W==0){
                printf("\n");
            break;
        }
        for(i = 0; i < 1000; i++);
        for(i=1;i<=H;i++){
            for(j=1;j<=W;j++){
                if(i==1||i==H||j==1||j==W){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
        printf("\n");
        }


    }

    return 0;
}