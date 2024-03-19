#include<stdio.h>
int main (void){
int H,W,i,l;
    for(;scanf("%d %d",&H,&W);){
        if(H==0&&W==0){
            break;
        }
        for(i=1;i<=H;i++){
            for(l=1;l<=W;l++){
                if(l==1||l==W){
                    printf("#");}
                else if(i==1||i==H){
                    printf("#");}
                else{
                printf(".");}
            }
            printf("\n");}
        printf("\n");}
    return 0;
}
    
 