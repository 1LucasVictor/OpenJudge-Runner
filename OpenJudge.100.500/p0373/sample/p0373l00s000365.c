#include<stdio.h>

int main(){
    int i,j,H,W;
    scanf("%d %d",&H,&W);
    while(H!=0||W!=0){
    for(i=1;i<=H;i++){
        for(j=1;j<=W;j++){
            if(i==1||i==H||j==1||j==W){
                printf("#");
            }else{
                printf(".");
            }
        }printf("\n");
    }scanf("%d %d",&H,&W);
    printf("\n");
    }return 0;
}
