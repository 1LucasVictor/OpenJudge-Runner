#include <stdio.h>

int main(){
    int H,W;
    scanf("%d %d",&H,&W);
    while(!(H==0&&W==0)){
        for(int i=0;i<H;i++){
            for(int f=0;f<W;f++){
                if(i==0||i==H-1){
                    printf("#");
                }else{
                    if(f==0||f==W-1){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d %d",&H,&W);
    }
}
