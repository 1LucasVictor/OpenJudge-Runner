#include<stdio.h>
int main(){
    int H,W,i,u;
    while(1){
        scanf("%d %d",&H, &W);
        if(H==0 && W==0) break;
        
        for(i=0;i<H;i++){
            for(u=0;u<W;u++){
                if(i==0 || i==H-1 || u==0 || u==W-1){
                    printf("#");
                }else{
                    printf(".");
                }
            
            }
            printf("\n");
        }
    }
}
