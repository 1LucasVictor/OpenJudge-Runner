#include<stdio.h>
 
int main (void){
     
    int H,W,i,t;
     
    for(;;){
    scanf("%d %d",&H,&W);
    if(H==0&&W==0)break;
    for(i=0;i<H;i++){
        for(t=0;t<W;t++){
            if(t==0||t==W-1){
            printf("#");
            }else if(i==0||i==H-1){
            printf("#");
            }else{
            printf(".");
            }
        }
    printf("\n");
    }
    printf("\n");
    }
     
return 0;
}