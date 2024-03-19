#include <stdio.h>

int main(int argc, const char * argv[]) {
    int H,W;
    int i,j;
    while(1){
        scanf("%d %d",&H,&W);
        if(H==0&&W==0){
            break;
        }
        for(i=1;i<=H;i++){
            if(i!=1){
                printf("\n");
            }for(j=1;j<=W;j++){
                if(i==1||j==1||i==H||j==W){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
        }printf("\n");
        printf("\n");
    }
    
    return 0;
}