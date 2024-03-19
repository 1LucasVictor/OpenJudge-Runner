#include<stdio.h>
int main(){
    int H,W,i,j;
    while(1){
        scanf("%d %d",&H,&W);
        if(H==0&&W==0){
            break;
        }
        for(j=1;j<=H;j++){
            for(i=1;i<=W;i++){
                if(j>1&&j<H&&i<W&&i>1){
                    printf(".");
                }
                else{
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    return 0;

}

